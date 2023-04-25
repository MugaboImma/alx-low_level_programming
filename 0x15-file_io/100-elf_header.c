#include "main.h"
#include <stdio.h>

/**
 * elf_check - A program that displays the info contained in ELF file
 * @p_elf: A pointer to an array of the ELF
 *
 * Desc: exit code 98, if a file is not ELF file
 */

void elf_check(unsigned char *p_elf)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (p_elf[i] != 127 && p_elf[i] != 'E' && p_elf[i] != 'L' && p_elf[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}


	}
}

/**
 * pri_magic - A function that prints the magic numbers of ELF
 * @p_elf: A pointer to the array containing ELF
 *
 * Descr: Magic numbers are separated by spaces
 */
void pri_magic(unsigned char *p_elf)
{
	int a;

	printf(" Magic: ");

	for (a = 0; a < WI_NIDENT; a++)
	{
		printf("%02x", p_elf[a]);

		if (x == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}

}

/**
 * pri_class -  A function that prints class of ELF
 * @p_elf: A pointer to the array containing ELF
 *
 */
void pri_class(unsigned char *p_elf)
{
	printf("  Class:                             ");

	switch (p_elf[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unkown: %x>\n", p_elf[EI_CLASS]);
	}
}

/**
 * pri_data - A function that prints the data of ELF
 * @p_elf: A pointer to the array containing ELF
 *
 */
void pri_data(unsigned char *p_elf)
{
	printf("  Data:                              ");

	switch (p_elf[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	}
}

/**
 * pri_version - A function that prints a version of ELF
 * @p_elf: A pointer to the array containing ELF
 *
 */
void pri_version(unsigned char *p_elf)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);
	switch (p_elf[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * pri_abi - A function that prints ABI Version of ELF
 * @p_elf: A pointer to the array containing ELF
 *
 */
void pri_abi(unsigned char *p_elf)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * pri_osabi -  A function that prints OS/ABI of elf
 * @p_elf: A pointer to an array that have ELF
 *
 */
void pri_osabi(unsigned char *p_elf)
{
	printf("  OS/ABI:                            ");
	switch (p_elf[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX -Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX -TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", p_elf[EI_OSABI]);

	}
}

/**
 * pri_type - A function that prints the type of ELF
 * @elf_type: The elf type
 * @p_elf: A pointer to an array that has ELF
 *
 */
void pri_type(unsigned int elf_type, unsigned char *p_elf)
{
	if (p_elf[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;
	printf("  Type:                              ");

	switch (elf_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_type);
	}
}

/**
 * close_elf - A function that closes ELF
 * @desc_elf: A file descriptor of ELF
 *
 * DESCR: if file not closed, then exit code 98
 */
void close_elf(int desc_elf)
{
	if (close(desc_elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can not close fd %d\n", desc_elf);
		exit(98);
	}
}
/**
 * pri_entry - A function that prints the entry point of ELF
 * @elf_entry: The address of ELF entry
 * @p_elf:  A pointer to an array that has ELF
 */
void pri_entry(unsigned long int elf_entry, unsigned char *p_elf)
{
	printf("  Entry point address:               ");
	if (p_elf[EI_DATA] == ELFDATA2MSB)
	{
		elf_entry = ((elf_entry << 8) & 0xFF00FF00) |
			((elf_entry >> 8) & 0xFF00FF);
		elf_entry = (elf_entry << 16) | (elf_entry >> 16);
	}
	if (p_elf[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elf_entry);
	else
		printf("%#lx\n", elf_entry);
}
/**
 * main - A function that displays info at the start of elf
 * @argc: The arguments supplied to the func
 * @argv: An array of pointers
 *
 * Return: Success(0)
 *
 * Description: if a file is not elf or func fails - exit 98
 *
 */
int main(int __attribute__((unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op_file, wr_file;

	op_file = open(argv[1], O_RDONLY);
	if (op_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	h_file = malloc(sizeof(Elf64_Ehdr));
	if (h_file == NULL)
	{
		close_elf(op_file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	wr_file = read(op_file, h_file, sizeof(Elf64_Ehdr));
	if (wr_file == -1)
	{
		free(h_file);
		close_elf(op_file);
		dprintf(STDERR_FILENO, "Error: `%s`:No such file\n", argv[1]);
		exit(98);
	}

	check_elf(h_file->p_elf);
	printf("ELF Head:\n");
	pri_magic(h_file->p_elf);
	pri_class(h_file->p_elf);
	pri_data(h_file->p_elf);
	pri_data(h_file->p_elf);
	pri_version(h_file->p_elf);
	pri_osabi(h_file->p_elf);
	pri_abi(h_file->p_elf);
	pri_type(h_file->elf_entry, h_file->p_elf);
	pri_entry(h_file->elf_entry, h_file->p_elf);

	free(h_file);
	close_elf(op_file);
	return (0);
}

