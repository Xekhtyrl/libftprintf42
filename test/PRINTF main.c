#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int b;
	int a;
	ft_printf("--------------|%%P FLAG|--------------\n");
	   printf("OG    (empty): %p                     \n", (void *)"");
	ft_printf("|     (empty): %p                     \n", (void *)"");
	ft_printf("|        NULL: %p                     \n", (void *)NULL);
	   printf("OG       NULL: %p                     \n", (void *)NULL);
	ft_printf("|       LLMAX: %p                     \n", (void *)LLONG_MAX);
       printf("OG      LLMAX: %p                     \n", (void *)LLONG_MAX);
	ft_printf("|        LMAX: %p                     \n", (void *)LONG_MAX);
	   printf("OG       LMAX: %p                     \n", (void *)LONG_MAX);
	ft_printf("|        LMAX: %p                     \n", (void *)LONG_MAX);
	   printf("OG       LMAX: %p                     \n", (void *)LONG_MAX);
	ft_printf("|       ULMAX: %p                     \n", (void *)ULONG_MAX);
	   printf("OG      ULMAX: %p                     \n", (void *)ULONG_MAX);
	ft_printf("|      -ULMAX: %p                     \n", (void *)-ULONG_MAX);
	   printf("OG     -ULMAX: %p                     \n", (void *)-ULONG_MAX);
	ft_printf("|        LMIN: %p                     \n", (void *)LONG_MIN);
	   printf("OG       LMIN: %p                     \n", (void *)LONG_MIN);
	ft_printf("|      UI_MAX: %p                     \n", (void *)UINT_MAX);
	   printf("OG     UI_MAX: %p                     \n", (void *)UINT_MAX);
	ft_printf("|       I_MIN: %p                     \n", (void *)INT_MIN);
	   printf("OG      I_MIN: %p                     \n", (void *)INT_MIN);
	ft_printf("|        -val: %p                    \n", (void *)-14523);
	   printf("OG       -val: %p                    \n", (void *)-14523);
	ft_printf("|          -1: %p                     \n", (void *)-1);
	   printf("OG         -1: %p                     \n", (void *)-1);
	ft_printf("|          42: %p                     \n", (void *)42);
	   printf("OG         42: %p                     \n", (void *)42);
	ft_printf("--------------|%%d FLAG|--------------\n");
	ft_printf("|      UI_MAX: %d                     \n", INT_MAX);
	   printf("OG     UI_MAX: %d                     \n", INT_MAX);
    ft_printf("|       I_MIN: %d                     \n", INT_MIN);
	   printf("OG      I_MIN: %d                     \n", INT_MIN);
	   printf("OG         -1: %d                     \n", -1);
	ft_printf("|          42: %d                     \n", 42);
	   printf("OG         42: %d                     \n", 42);
	ft_printf("|         -42: %d                     \n", -42);
	   printf("OG        -42: %d                    \n", -42);

	ft_printf("--------------|%%i FLAG|--------------\n");
	ft_printf("|      UI_MAX: %i                     \n", INT_MAX);
	   printf("OG     UI_MAX: %i                     \n", INT_MAX);
	ft_printf("|       I_MIN: %i                     \n", INT_MIN);
	   printf("OG      I_MIN: %i                     \n", INT_MIN);
	ft_printf("|        -val: %i                    \n", -14523);
	   printf("OG       -val: %i                    \n", -14523);
	ft_printf("|          -1: %i                     \n", -1);
	   printf("OG         -1: %i                     \n", -1);
	ft_printf("|          42: %i                     \n", 42);
	   printf("OG         42: %i                     \n", 42);
	ft_printf("|         -42: %i                     \n", -42);
	   printf("OG        -42: %i                     \n", -42);	

	ft_printf("--------------|%%u FLAG|--------------\n");
	ft_printf("|      UI_MAX: %u                     \n", UINT_MAX);
	   printf("OG     UI_MAX: %u                     \n", UINT_MAX);
    ft_printf("|      UI_MAX: %u                     \n", LONG_MAX);
	   printf("OG     UI_MAX: %u                     \n", LONG_MAX);
	ft_printf("|      UI_MAX: %u                     \n", 9223372036854775807LL);
	   printf("OG     UI_MAX: %u                     \n", 9223372036854775807LL);
	ft_printf("|      UL_MAX: %u                     \n", UINT_MAX);
	   printf("OG     UL_MAX: %u                     \n", UINT_MAX);
       printf("|       L_MAX: %u                     \n", UINT_MAX);
	   printf("OG      L_MAX: %u                     \n", UINT_MAX);

	ft_printf("|           0: %u                     \n", 0);
	   printf("OG          0: %u                     \n", 0);
	ft_printf("|          42: %u                     \n", 42);
	   printf("OG         42: %u                     \n", 42);

	ft_printf("--------------|%%x FLAG|--------------\n");
	
	a = ft_printf("|       UIMAX: %x                     \n",  2019496700);
	b =    printf("OG      UIMAX: %x                     \n",  2019496700);
	printf ("Original\t>>>\t%i\nYours\t>>>>\t%i\n", b, a);
	ft_printf("|       ULMAX: %x                     \n", ULONG_MAX);
	   printf("OG      ULMAX: %x                     \n", ULONG_MAX);
	a = ft_printf("|    LONG_MIN: %x                     \n", LONG_MIN);
	b =    printf("OG   LONG_MIN: %x                     \n", LONG_MIN);
	printf ("Original\t>>>\t%i\nYours\t>>>>\t%i\n", b, a);
	ft_printf("|    LONG_MAX: %x                     \n", LONG_MAX);
	   printf("OG   LONG_MAX: %x                     \n", LONG_MAX);
	a = ft_printf("|        -val: %x                    \n", -14523);
	b =    printf("OG       -val: %x                    \n", -14523);
	printf ("Original\t>>>\t%i\nYours\t>>>>\t%i\n", b, a);
	a = ft_printf("|          -1: %x                     \n", -1);
	b =    printf("OG         -1: %x                     \n", -1);
	printf ("Original\t>>>\t%i\nYours\t>>>>\t%i\n", b, a);
	ft_printf("|          42: %x                     \n", 42);
	   printf("OG         42: %x                     \n", 42);
	ft_printf("|         -42: %x                     \n", -42);
	   printf("OG        -42: %x                     \n", -42);
    	ft_printf("--------------|%%X FLAG|--------------\n");
	
	a = ft_printf("|        LMAX: %X                     \n", UINT_MAX);
	b =    printf("OG       LMAX: %X                     \n", UINT_MAX);
	printf ("Original\t>>>\t%i\nYours\t>>>>\t%i\n", b, a);
	a = ft_printf("|        -val: %X                    \n", -14523);
	b =    printf("OG       -val: %X                    \n", -14523);
	printf ("Original\t>>>\t%i\nYours\t>>>>\t%i\n", b, a);
	ft_printf("|           1: %X                     \n",1);
	   printf("OG          1: %X                     \n", 1);
	ft_printf("|          42: %X                     \n", 42);
	   printf("OG         42: %X                     \n", 42);
	ft_printf("|          42: %X                     \n", 42);
	   printf("OG         42: %X                     \n", 42);

	// ft_printf("%");
	//    printf("%");

	//b =    printf("coucou %s coucou \n", "k l&NXtF`}GJG,$EFOH$][w\n 37kbNJyv\v-cp=0aJ.ncZ0z541ZCd/ JqXh&l>9.,l7iMv Rbwn:#[>*x5<\trU");
	// printf("\n------------\n");
	//a = ft_printf("coucou %s coucou \n", "k l&NXtF`}GJG,$EFOH$][w\n 37kbNJyv\v-cp=0aJ.ncZ0z541ZCd/ JqXh&l>9.,l7iMv Rbwn:#[>*x5<\trU");
	//printf ("Original\t>>>\t%i\nYours\t>>>>\t%i\n", b, a);
	// printf("\n__________NEXT TEST_________\n");
	//a = ft_printf("?a^X%c/7}(}fV77%sPVT\r3RbRw%cqUsICC%XKX4j&U%s{D?%%/$M", 0, "k l&NXtF`}GJG,$EFOH$][w\n 37kbNJyv\v-cp=0aJ.ncZ0z541ZCd/ JqXh&l>9.,l7iMv Rbwn:#[>*x5<\trU", -1544082211, 48713326, "nE*Iz0.}yZvi*hV%\r8c\t KA_LxEM2kOaT$|{arV|Kfp) s8xhX1riEXrm{CU\f?\"\vv\rH0%2U60Nq^t]e");
	// printf("\n------------\n");
	//b =    printf("?a^X%c/7}(}fV77%sPVT\r3RbRw%cqUsICC%XKX4j&U%s{D?%%/$M", 0, "k l&NXtF`}GJG,$EFOH$][w\n 37kbNJyv\v-cp=0aJ.ncZ0z541ZCd/ JqXh&l>9.,l7iMv Rbwn:#[>*x5<\trU", -1544082211, 48713326, "nE*Iz0.}yZvi*hV%\r8c\t KA_LxEM2kOaT$|{arV|Kfp) s8xhX1riEXrm{CU\f?\"\vv\rH0%2U60Nq^t]e");
	printf("\n");
	//printf ("Original\t>>>\t%i\nYours\t>>>>\t%i\n", b, a);
	// printf("\n__________NEXT TEST_________\n");
	//a = ft_printf("%%%w%%%r%%%y%%%k%%%%%%z%%%%%%%%%%h%%%%%k%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
	// printf("\n------------\n");
	//b =    printf("%%%w%%%r%%%y%%%k%%%%%%z%%%%%%%%%%h%%%%%k%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
	//printf ("Original\t>>>\t%i\nYours\t>>>>\t%i\n", b, a);
	// printf("\n__________NEXT TEST_________\n");
	//a = ft_printf ("M = %c %c %c aaaaaaaaaaaaaa c%s %i s\n", '1', 0, '0', "coucou          wkuycfgliecf", 548);
	// printf("\n------------\n");
	//b =    printf ("O = %c %c %c aaaaaaaaaaaaaa c%s %i s\n", '1', 0, '0', "coucou          wkuycfgliecf", 548);
	//printf ("Original\t>>>\t%i\nYours\t>>>>\t%i\n", b, a);
	// printf("\n__________NEXT TEST_________\n");
	//a = ft_printf("%%|%c|%%|%s|%%|%d|%%|%i|%%|%u|%%|%x|%%|%X|%%|%%| %%|%c|%%|%s|%%|%d|%%|%i|%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	// printf("\n------------\n");
	//b =    printf("%%|%c|%%|%s|%%|%d|%%|%i|%%|%u|%%|%x|%%|%X|%%|%%| %%|%c|%%|%s|%%|%d|%%|%i|%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("\n");
	//printf ("Original\t>>>\t%i\nYours\t>>>>\t%i\n", b, a);
	//return (0);
}
