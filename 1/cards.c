// Программа для оценивания карт.
// Выпущенно под публичной Лос-Вегасской лицензией.
// (с) 2021 Команда колледжа по блек-джеку.

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	card_name[3];
	int		val;

	puts("Введите название карты: ");
	scanf("%2s", card_name);
	val = 0;
	if (card_name[0] == 'K')
		val = 10;
	else if (card_name[0] == 'Q')
		val = 10;
	else if (card_name[0] == 'J')
		val = 10;
	else if (card_name[0] == 'A')
		val = 11;
	else
		val = atoi(card_name);
	if (val > 2 && val < 7)
		puts("Счётчик увелтичился");
	else (val > 9)
		pust ("Счётчик уменьшился");
	return (0);
}
	
	// printf("Ценность карты: %i\n", val);