#include<iostream>
#include<string.h>

using namespace std;

char unitate_masura1[] = "Volum";

char volum1[] = "Metru_Cub";
char volum2[] = "Centilitru";
char volum3[] = "Decilitru";
char volum4[] = "Picior_Cub";
char volum5[] = "Litru";


char unitate_masura2[] = "Temperatura";

char temperatura1[] = "Fahrenheit";
char temperatura2[] = "Celsius";
char temperatura3[] = "Kelvin";
char temperatura4[] = "Rankvine";


char unitate_masura3[] = "Masa";

char masa1[] = "Gram";
char masa2[] = "Kilogram";
char masa3[] = "Livre";
char masa4[] = "Uncie";
char masa5[] = "Slug";
char masa6[] = "Tona";


char unitate_masura4[] = "Energie";

char energie1[] = "Joule";
char energie2[] = "Erg";
char energie3[] = "Caloria";
char energie4[] = "Tol_Funt_Forta";
char energie5[] = "Kilocaloria";


char unitate_masura5[] = "Densitate";

char densitate1[] = "Kilogram/Metru_cub";
char densitate2[] = "Gram/Centimetru_cub";
char densitate3[] = "Gram/litru";
char densitate4[] = "Gram/Metru_cub";
char densitate5[] = "Kilogram/Centimetru_cub";
char densitate6[] = "Kilogram/Litru";
char densitate7[] = "Funt/Picior_cub";
char unitate_masura6[] = "Arie";

char arie1[] = "Metru_patrat";
char arie2[] = "Centimetru_patrat";
char arie3[] = "Picior_patrat";
char arie4[] = "Tol";
char arie5[] = "Kilometru_patrat";
char arie6[] = "Milimetru_patrat";
char arie7[] = "Yard_patrat";


char unitate_masura7[] = "Forta";

char forta1[] = "Newton";
char forta2[] = "Livra_forta";
char forta3[] = "Kilogram_forta";
char forta4[] = "Dyna";

double volum1_2(double number)
{
	number = number * 100000;
	return number;
}
double volum1_3(double number)
{
	number = number * 10000.00;
	return number;
}
double volum1_4(double number)
{
	number = number * 35.3107344;
	return number;

}
double volum1_5(double number)
{
	number = number * 1000.00;
	return number;

}
double volum2_1(double number)
{
	number = number / 1000;
	return number;
}
double volum2_3(double number)
{
	number = number / 10;
	return number;
}
double volum2_4(double number)
{
	number = number * 0.000353;
	return number;
}
double volum2_5(double number)
{
	number = number * 0.01;
	return number;
}
double volum3_1(double number)
{
	number = number * 0.0001;
	return number;

}
double volum3_2(double number)
{
	number = number * 10.00;
	return number;

}
double volum3_4(double number)
{
	number = number * 0.00353;
	return number;

}
double volum3_5(double number)
{
	number = number * 0.1;
	return number;

}
double volum4_1(double number)
{
	number = number * 0.02832;
	return number;

}
double volum4_2(double number)
{
	number = number * 2832.00;
	return number;

}
double volum4_3(double number)
{
	number = number * 283.20;
	return number;

}
double volum4_5(double number)
{
	number = number * 28.32;
	return number;

}
double volum5_1(double number)
{
	number = number * 100.00;
	return number;

}
double volum5_2(double number)
{
	number = number * 10.00;
	return number;

}
double volum5_3(double number)
{
	number = number * 35.3107344;
	return number;

}
double volum5_4(double number)
{
	number = number * 0.0353;
	return number;

}
double temperatura1_2(double number)
{
	number = number*-17.22;
	return number;
}
double temperatura1_3(double number)
{
	number = number*255.927;
	return number;
}
double temperatura1_4(double number)
{
	number = number*460.67;
	return number;
}
double temperatura2_1(double number)
{
	number = number*33.80;
	return number;
}
double temperatura2_3(double number)
{
	number = number*274.15;
	return number;
}
double temperatura2_4(double number)
{
	number = number*493.47;
	return number;
}
double temperatura3_1(double number)
{
	number = number*-457.87;
	return number;
}double temperatura3_2(double number)
{
	number = number*-272.15;
	return number;
}double temperatura3_4(double number)
{
	number = number*1.80;
	return number;
}double temperatura4_1(double number)
{
	number = number*-458.669;
	return number;
}
double temperatura4_2(double number)
{
	number = number*-272.594;
	return number;
}
double temperatura4_3(double number)
{
	number = number*0.55;
	return number;
}
double masa1_2(double number)
{
	number = number*0.001;
	return number;
}
double masa1_3(double number)
{
	number = number*0.0022;
	return number;
}
double masa1_4(double number)
{
	number = number*0.035;
	return number;
}
double masa1_5(double number)
{
	number = number*0.00006;
	return number;
}
double masa1_6(double number)
{
	number = number*0.000001;
	return number;
}
double masa2_1(double number)
{
	number = number * 1000;
	return number;
}
double masa2_3(double number)
{
	number = number*2.204;
	return number;
}
double masa2_4(double number)
{
	number = number*35.27;
	return number;
}
double masa2_5(double number)
{
	number = number*0.068;
	return number;
}
double masa2_6(double number)
{
	number = number*0.001;
	return number;
}
double masa3_1(double number)
{
	number = number*453.592;
	return number;
}
double masa3_2(double number)
{
	number = number*0.453;
	return number;
}
double masa3_4(double number)
{
	number = number * 16;
	return number;
}
double masa3_5(double number)
{
	number = number*0.0310;
	return number;
}
double masa3_6(double number)
{
	number = number*0.0004;
	return number;
}
double masa4_1(double number)
{
	number = number*28.3495;
	return number;
}
double masa4_2(double number)
{
	number = number*0.02834;
	return number;
}
double masa4_3(double number)
{
	number = number*0.0625;
	return number;
}
double masa4_5(double number)
{
	number = number*0.0019;
	return number;
}
double masa4_6(double number)
{
	number = number*0.00002;
	return number;
}
double masa5_1(double number)
{
	number = number*14593.902;
	return number;
}
double masa5_2(double number)
{
	number = number*14.59;
	return number;
}
double masa5_3(double number)
{
	number = number*32.174;
	return number;
}
double masa5_4(double number)
{
	number = number*514.78;
	return number;
}
double masa5_6(double number)
{
	number = number*0.014;
	return number;
}
double masa6_1(double number)
{
	number = number * 1000000;
	return number;
}
double masa6_2(double number)
{
	number = number * 1000;
	return number;
}
double masa6_3(double number)
{
	number = number*2204.624;
	return number;
}
double masa6_4(double number)
{
	number = number*35273.990;
	return number;
}
double masa6_5(double number)
{
	number = number*68.52;
	return number;
}
double energie1_2(double number)
{
	number = number * 2.388;
	return number;
}
double energie1_3(double number)
{
	number = number * 8.8507;
	return number;
}

double energie1_5(double number)
{
	number = number * 2.388;
	return number;
}
double energie2_1(double number)
{
	number = number * 41868000;
	return number;
}
double energie2_3(double number)
{
	number = number * 37.0563;
	return number;
}
double energie2_4(double number)
{
	number = number * 4.1868;
	return number;
}
double energie2_5(double number)
{
	number = number * 0.001;
	return number;
}

double energie3_1(double number)
{
	number = number * 1129848.2;
	return number;
}
double energie3_2(double number)
{
	number = number * 0.026;
	return number;
}
double energie3_4(double number)
{
	number = number * 0.112;
	return number;
}
double energie3_5(double number)
{
	number = number * 0.00002;
	return number;
}
double energie4_1(double number)
{
	number = number * 10000000;
	return number;
}
double energie4_2(double number)
{
	number = number * 0.2388;
	return number;
}
double energie4_3(double number)
{
	number = number * 8.850;
	return number;
}
double energie4_5(double number)
{
	number = number * 0.0002;
	return number;
}
double energie5_1(double number)
{
	number = number * 418680000.00;
	return number;
}
double energie5_2(double number)
{
	number = number * 1000.00;
	return number;
}
double energie5_3(double number)
{
	number = number * 37056.30;
	return number;
}
double energie5_4(double number)
{
	number = number * 4186.8;
	return number;
}
double forta1_2(double number)
{
	number = number * 0.2248;
	return number;
}
double forta1_3(double number)
{
	number = number * 0.102;
	return number;
}
double forta1_4(double number)
{
	number = number * 10000.00;
	return number;
}
double forta2_1(double number)
{
	number = number * 4.4482;
	return number;
}
double forta2_3(double number)
{
	number = number * 0.453;
	return number;
}
double forta2_4(double number)
{
	number = number *444822.16;
	return number;
}
double forta3_1(double number)
{
	number = number * 9.8;
	return number;
}
double forta3_2(double number)
{
	number = number * 2.20312;
	return number;
}
double forta3_4(double number)
{
	number = number * 980000;
	return number;
}
double forta4_1(double number)
{
	number = number * 0.00001;
	return number;
}
double forta4_2(double number)
{
	number = number * 0.000002;
	return number;
}
double forta4_3(double number)
{
	number = number * 0.000001;
	return number;
}
double densitate1_2(double number)
{
	number = number * 0.001;
	return number;
}
double densitate1_3(double number)
{
	number = number * 1.00;
	return number;
}
double densitate1_4(double number)
{
	number = number * 1000;
	return number;
}
double densitate1_5(double number)
{
	number = number * 0.000001;
	return number;
}
double densitate1_6(double number)
{
	number = number * 0.001;
	return number;
}
double densitate1_7(double number)
{
	number = number * 0.06243;
	return number;
}
double densitate2_1(double number)
{
	number = number * 1000.00;
	return number;
}
double densitate2_3(double number)
{
	number = number * 1000.00;
	return number;
}
double densitate2_4(double number)
{
	number = number * 1000000.00;
	return number;
}
double densitate2_5(double number)
{
	number = number * 0.001;
	return number;
}
double densitate2_6(double number)
{
	number = number * 1.00;
	return number;
}
double densitate2_7(double number)
{
	number = number * 62.43;
	return number;
}
double densitate3_1(double number)
{
	number = number * 1.00;
	return number;
}
double densitate3_2(double number)
{
	number = number *0.001;
	return number;
}
double densitate3_4(double number)
{
	number = number * 1000.00;
	return number;
}
double densitate3_5(double number)
{
	number = number * 0.000001;
	return number;
}
double densitate3_6(double number)
{
	number = number * 0.001;
	return number;
}
double densitate3_7(double number)
{
	number = number * 0.06243;
	return number;
}
double densitate4_1(double number)
{
	number = number * 0.001;
	return number;
}
double densitate4_2(double number)
{
	number = number * 0.000001;
	return number;
}
double densitate4_3(double number)
{
	number = number * 0.001;
	return number;
}
double densitate4_6(double number)
{
	number = number * 0.000001;
	return number;
}
double densitate4_7(double number)
{
	number = number * 0.0000624;
	return number;
}
double densitate5_1(double number)
{
	number = number * 1000000.00;
	return number;
}
double densitate5_2(double number)
{
	number = number * 1000.00;
	return number;
}
double densitate5_3(double number)
{
	number = number * 1000000.00;
	return number;
}
double densitate5_4(double number)
{
	number = number * 1000000000;
	return number;
}
double densitate5_6(double number)
{
	number = number * 1000.00;
	return number;
}
double densitate5_7(double number)
{
	number = number * 62430.00;
	return number;
}
double densitate6_1(double number)
{
	number = number * 1000.00;
	return number;
}
double densitate6_2(double number)
{
	number = number * 1.00;
	return number;
}
double densitate6_3(double number)
{
	number = number * 1000.00;
	return number;
}
double densitate6_4(double number)
{
	number = number * 1000000.00;
	return number;
}
double densitate6_5(double number)
{
	number = number * 0.001;
	return number;
}
double densitate6_7(double number)
{
	number = number * 62.43;
	return number;
}
double densitate7_1(double number)
{
	number = number * 16017.940;
	return number;
}
double densitate7_2(double number)
{
	number = number * 0.01601;
	return number;
}
double densitate7_3(double number)
{
	number = number * 16.0179;
	return number;
}
double densitate7_4(double number)
{
	number = number * 16017.940;
	return number;
}
double densitate7_5(double number)
{
	number = number * 0.000016;
	return number;
}
double densitate7_6(double number)
{
	number = number * 0.016;
	return number;
}
double arie1_2(double number)
{
	number = number * 10000.00;
	return number;
}
double arie1_3(double number)
{
	number = number * 10.764;
	return number;
}
double arie1_4(double number)
{
	number = number * 1549.907;
	return number;
}
double arie1_5(double number)
{
	number = number * 0.000001;
	return number;
}
double arie1_6(double number)
{
	number = number * 1000000.00;
	return number;
}
double arie1_7(double number)
{
	number = number * 1.19598;
	return number;
}
double arie2_1(double number)
{
	number = number * 0.0001;
	return number;
}
double arie2_3(double number)
{
	number = number * 0.001076;
	return number;
}
double arie2_4(double number)
{
	number = number * 0.15499;
	return number;
}
double arie2_6(double number)
{
	number = number * 100.0000;
	return number;
}
double arie2_7(double number)
{
	number = number * 0.00011;
	return number;
}
double arie3_1(double number)
{
	number = number * 0.0929;
	return number;
}
double arie3_2(double number)
{
	number = number * 928.99;
	return number;
}
double arie3_4(double number)
{
	number = number * 143.98;
	return number;
}
double arie3_5(double number)
{
	number = number * 9.289999;
	return number;
}
double arie3_6(double number)
{
	number = number * 92900;
	return number;
}
double arie3_7(double number)
{
	number = number * 0.1111;
	return number;
}
double arie4_1(double number)
{
	number = number * 0.0006452;
	return number;
}
double arie4_2(double number)
{
	number = number * 6.451;
	return number;
}
double arie4_3(double number)
{
	number = number * 0.00694;
	return number;
}

double arie4_6(double number)
{
	number = number * 645.2;
	return number;
}
double arie4_7(double number)
{
	number = number * 0.000771	;
	return number;
}
double arie5_1(double number)
{
	number = number * 1000000.00;
	return number;
}
double arie5_2(double number)
{
	number = number * 10000000000.00;
	return number;
}
double arie5_3(double number)
{
	number = number * 10764262.6;
	return number;
}
double arie5_4(double number)
{
	number = number * 1549907005.574;
	return number;
}

double arie5_7(double number)
{
	number = number * 1195989.39;
	return number;
}
double arie6_1(double number)
{
	number = number * 0.000001;
	return number;
}
double arie6_2(double number)
{
	number = number * 0.009;
	return number;
}
double arie6_3(double number)
{
	number = number * 0.000010;
	return number;
}
double arie6_4(double number)
{
	number = number * 0.00154;
	return number;
}
double arie6_7(double number)
{
	number = number * 0.000001195;
	return number;
}
double arie7_1(double number)
{
	number = number * 0.83612;
	return number;
}
double arie7_2(double number)
{
	number = number * 8361.27816;
	return number;
}
double arie7_3(double number)
{
	number = number * 9.000299;
	return number;
}
double arie7_4(double number)
{
	number = number * 1295.920;
	return number;
}
double arie7_5(double number)
{
	number = number * 8.3612;
	return number;
}
double arie7_6(double number)
{
	number = number * 836127.816;
	return number;
}

void validareDateIntrare()
{

	double numar;
	int ok;
	char unitateMasuraDeConvertit[40];
	char unitateMasuraCovertita[40];
	for (int i = 0; i < 40; i++)
	{
		unitateMasuraCovertita[i] = NULL;
		unitateMasuraDeConvertit[i] = NULL;
	}
	cout << "Introduceti o valoare pe care doriti sa o convertiti" << endl;
	cin >> numar;
	
		cout << unitate_masura1 << endl << endl;
		cout << volum1 << endl;
		cout << volum2 << endl;
		cout << volum3 << endl;
		cout << volum4 << endl;
		cout << volum5 << endl << endl << endl;

		cout << unitate_masura2 << endl << endl;

		cout << temperatura1 << endl;
		cout << temperatura2 << endl;
		cout << temperatura3 << endl;
		cout << temperatura4 << endl << endl << endl;

		cout << unitate_masura3 << endl << endl;

		cout << masa1 << endl;
		cout << masa2 << endl;
		cout << masa3 << endl;
		cout << masa4 << endl;
		cout << masa5 << endl;
		cout << masa6 << endl << endl << endl;



		cout << unitate_masura4 << endl << endl;

		cout << energie1 << endl;
		cout << energie2 << endl;
		cout << energie3 << endl;
		cout << energie4 << endl;
		cout << energie5 << endl << endl << endl;


		cout << unitate_masura5 << endl << endl;

		cout << densitate1 << endl;
		cout << densitate2 << endl;
		cout << densitate3 << endl;
		cout << densitate4 << endl;
		cout << densitate5 << endl;
		cout << densitate6 << endl;
		cout << densitate7 << endl << endl << endl;

		cout << unitate_masura6 << endl << endl;

		cout << arie1 << endl;
		cout << arie2 << endl;
		cout << arie3 << endl;
		cout << arie4 << endl;
		cout << arie5 << endl;
		cout << arie6 << endl;
		cout << arie7 << endl << endl << endl;


		cout << unitate_masura6 << endl << endl;

		cout << forta1 << endl;
		cout << forta2 << endl;
		cout << forta3 << endl;
		cout << forta4 << endl;

		cout << "Alegeti o unitate de masura de convertit din aceasi categorie" << endl;
		cin >> unitateMasuraDeConvertit;
		cout << "Alegeti o unitate de masura in care doriti sa convertiti" << endl;
		cin >> unitateMasuraCovertita;
		//incepe volumul
		//volum1
		if (strcmp(unitateMasuraDeConvertit, volum1) == 0 && strcmp(unitateMasuraCovertita, volum2) == 0)
		{
			cout << "Rezultatul conversiei este: " << volum1_2(numar) << endl;
		;
		}
		if (strcmp(unitateMasuraDeConvertit, volum1) == 0 && strcmp(unitateMasuraCovertita, volum3) == 0)
		{
			cout << "Rezultatul conversiei este: " << volum1_3(numar) << endl;
		
		}
		if (strcmp(unitateMasuraDeConvertit, volum1) == 0 && strcmp(unitateMasuraCovertita, volum4) == 0)
		{
			cout << "Rezultatul conversiei este: " << volum1_4(numar) << endl;
		

		}
		if (strcmp(unitateMasuraDeConvertit, volum1) == 0 && strcmp(unitateMasuraCovertita, volum5) == 0)
			cout << "Rezultatul conversiei este: " << volum1_5(numar) << endl;
		//volum2	
		if (strcmp(unitateMasuraDeConvertit, volum2) == 0 && strcmp(unitateMasuraCovertita, volum1) == 0)
			cout << "Rezultatul conversiei este: " << volum2_1(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, volum2) == 0 && strcmp(unitateMasuraCovertita, volum3) == 0)
			cout << "Rezultatul conversiei este: " << volum2_3(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, volum2) == 0 && strcmp(unitateMasuraCovertita, volum4) == 0)
			cout << "Rezultatul conversiei este: " << volum2_4(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, volum2) == 0 && strcmp(unitateMasuraCovertita, volum5) == 0)
			cout << "Rezultatul conversiei este: " << volum2_5(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, volum3) == 0 && strcmp(unitateMasuraCovertita, volum1) == 0)
			cout << "Rezultatul conversiei este: " << volum3_1(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, volum3) == 0 && strcmp(unitateMasuraCovertita, volum2) == 0)
			cout << "Rezultatul conversiei este: " << volum3_2(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, volum3) == 0 && strcmp(unitateMasuraCovertita, volum4) == 0)
			cout << "Rezultatul conversiei este: " << volum3_4(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, volum3) == 0 && strcmp(unitateMasuraCovertita, volum5) == 0)
			cout << "Rezultatul conversiei este: " << volum3_5(numar) << endl;
		//volum4
		if (strcmp(unitateMasuraDeConvertit, volum4) == 0 && strcmp(unitateMasuraCovertita, volum1) == 0)
			cout << "Rezultatul conversiei este: " << volum4_1(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, volum4) == 0 && strcmp(unitateMasuraCovertita, volum2) == 0)
			cout << "Rezultatul conversiei este: " << volum4_2(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, volum4) == 0 && strcmp(unitateMasuraCovertita, volum3) == 0)
			cout << "Rezultatul conversiei este: " << volum4_3(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, volum4) == 0 && strcmp(unitateMasuraCovertita, volum5) == 0)
			cout << "Rezultatul conversiei este: " << volum4_5(numar) << endl;
		//volum5
		if (strcmp(unitateMasuraDeConvertit, volum5) == 0 && strcmp(unitateMasuraCovertita, volum1) == 0)
			cout << "Rezultatul conversiei este: " << volum5_1(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, volum5) == 0 && strcmp(unitateMasuraCovertita, volum2) == 0)
			cout << "Rezultatul conversiei este: " << volum5_2(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, volum5) == 0 && strcmp(unitateMasuraCovertita, volum3) == 0)
			cout << "Rezultatul conversiei este: " << volum5_3(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, volum5) == 0 && strcmp(unitateMasuraCovertita, volum4) == 0)
			cout << "Rezultatul conversiei este: " << volum5_4(numar) << endl;
		//seterminavolum
		//incepetemperatura
		//temp1
		if (strcmp(unitateMasuraDeConvertit, temperatura1) == 0 && strcmp(unitateMasuraCovertita, temperatura2) == 0)
			cout << "Rezultatul conversiei este: " << temperatura1_2(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, temperatura1) == 0 && strcmp(unitateMasuraCovertita, temperatura3) == 0)
			cout << "Rezultatul conversiei este: " << temperatura1_3(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, temperatura1) == 0 && strcmp(unitateMasuraCovertita, temperatura4) == 0)
			cout << "Rezultatul conversiei este: " << volum1_4(numar) << endl;
		//temp2
		if (strcmp(unitateMasuraDeConvertit, temperatura2) == 0 && strcmp(unitateMasuraCovertita, temperatura1) == 0)
			cout << "Rezultatul conversiei este: " << temperatura2_1(numar) << endl;
		else
			if (strcmp(unitateMasuraDeConvertit, temperatura2) == 0 && strcmp(unitateMasuraCovertita, temperatura3) == 0)
				cout << "Rezultatul conversiei este: " << temperatura2_3(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, temperatura2) == 0 && strcmp(unitateMasuraCovertita, temperatura4) == 0)
			cout << "Rezultatul conversiei este: " << volum2_4(numar) << endl;
		//temp3
		if (strcmp(unitateMasuraDeConvertit, temperatura3) == 0 && strcmp(unitateMasuraCovertita, temperatura1) == 0)
			cout << "Rezultatul conversiei este: " << temperatura3_1(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, temperatura3) == 0 && strcmp(unitateMasuraCovertita, temperatura2) == 0)
			cout << "Rezultatul conversiei este: " << temperatura3_2(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, temperatura3) == 0 && strcmp(unitateMasuraCovertita, temperatura4) == 0)
			cout << "Rezultatul conversiei este: " << volum3_4(numar) << endl;
		//temp4
		if (strcmp(unitateMasuraDeConvertit, temperatura4) == 0 && strcmp(unitateMasuraCovertita, temperatura1) == 0)
			cout << "Rezultatul conversiei este: " << temperatura4_1(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, temperatura4) == 0 && strcmp(unitateMasuraCovertita, temperatura2) == 0)
			cout << "Rezultatul conversiei este: " << temperatura4_2(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, temperatura4) == 0 && strcmp(unitateMasuraCovertita, temperatura3) == 0)
			cout << "Rezultatul conversiei este: " << volum4_3 << endl;
		//temperatura
		//incepe masa
		//masa1
		if (strcmp(unitateMasuraDeConvertit, masa1) == 0 && strcmp(unitateMasuraCovertita, masa2) == 0)
		{
			cout << "Rezultatul conversiei este: " << endl;
			cout << masa1_2(numar) << endl;
		}
		if (strcmp(unitateMasuraDeConvertit, masa1) == 0 && strcmp(unitateMasuraCovertita, masa3) == 0)
			cout << "Rezultatul conversiei este: " << masa1_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa1) == 0 && strcmp(unitateMasuraCovertita, masa4) == 0)
			cout << "Rezultatul conversiei este: " << masa1_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa1) == 0 && strcmp(unitateMasuraCovertita, masa5) == 0)
			cout << "Rezultatul conversiei este: " << masa1_5(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa1) == 0 && strcmp(unitateMasuraCovertita, masa6) == 0)
			cout << "Rezultatul conversiei este: " << masa1_6(numar) << endl;
		//masa2
		if (strcmp(unitateMasuraDeConvertit, masa2) == 0 && strcmp(unitateMasuraCovertita, masa1) == 0)
			cout << "Rezultatul conversiei este: " << masa2_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa2) == 0 && strcmp(unitateMasuraCovertita, masa3) == 0)
			cout << "Rezultatul conversiei este: " << masa2_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa2) == 0 && strcmp(unitateMasuraCovertita, masa4) == 0)
			cout << "Rezultatul conversiei este: " << masa2_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa2) == 0 && strcmp(unitateMasuraCovertita, masa5) == 0)
			cout << "Rezultatul conversiei este: " << masa2_5(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa2) == 0 && strcmp(unitateMasuraCovertita, masa6) == 0)
			cout << "Rezultatul conversiei este: " << masa2_6(numar) << endl;
		//masa3
		if (strcmp(unitateMasuraDeConvertit, masa3) == 0 && strcmp(unitateMasuraCovertita, masa1) == 0)
			cout << "Rezultatul conversiei este: " << masa3_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa3) == 0 && strcmp(unitateMasuraCovertita, masa2) == 0)
			cout << "Rezultatul conversiei este: " << masa3_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa3) == 0 && strcmp(unitateMasuraCovertita, masa4) == 0)
			cout << "Rezultatul conversiei este: " << masa3_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa3) == 0 && strcmp(unitateMasuraCovertita, masa5) == 0)
			cout << "Rezultatul conversiei este: " << masa3_5(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa3) == 0 && strcmp(unitateMasuraCovertita, masa6) == 0)
			cout << "Rezultatul conversiei este: " << masa3_6(numar) << endl;
		//masa4
		if (strcmp(unitateMasuraDeConvertit, masa4) == 0 && strcmp(unitateMasuraCovertita, masa1) == 0)
			cout << "Rezultatul conversiei este: " << masa4_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa4) == 0 && strcmp(unitateMasuraCovertita, masa2) == 0)
			cout << "Rezultatul conversiei este: " << masa4_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa4) == 0 && strcmp(unitateMasuraCovertita, masa3) == 0)
			cout << "Rezultatul conversiei este: " << masa4_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa4) == 0 && strcmp(unitateMasuraCovertita, masa5) == 0)
			cout << "Rezultatul conversiei este: " << masa4_5(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa4) == 0 && strcmp(unitateMasuraCovertita, masa6) == 0)
			cout << "Rezultatul conversiei este: " << masa4_6(numar) << endl;
		//masa5
		if (strcmp(unitateMasuraDeConvertit, masa5) == 0 && strcmp(unitateMasuraCovertita, masa1) == 0)
			cout << "Rezultatul conversiei este: " << masa5_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa5) == 0 && strcmp(unitateMasuraCovertita, masa2) == 0)
			cout << "Rezultatul conversiei este: " << masa5_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa5) == 0 && strcmp(unitateMasuraCovertita, masa3) == 0)
			cout << "Rezultatul conversiei este: " << masa5_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa5) == 0 && strcmp(unitateMasuraCovertita, masa4) == 0)
			cout << "Rezultatul conversiei este: " << masa5_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa5) == 0 && strcmp(unitateMasuraCovertita, masa6) == 0)
			cout << "Rezultatul conversiei este: " << masa5_6(numar) << endl;
		//masa6
		if (strcmp(unitateMasuraDeConvertit, masa6) == 0 && strcmp(unitateMasuraCovertita, masa1) == 0)
			cout << "Rezultatul conversiei este: " << masa6_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa6) == 0 && strcmp(unitateMasuraCovertita, masa2) == 0)
			cout << "Rezultatul conversiei este: " << masa6_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa6) == 0 && strcmp(unitateMasuraCovertita, masa3) == 0)
			cout << "Rezultatul conversiei este: " << masa6_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa6) == 0 && strcmp(unitateMasuraCovertita, masa4) == 0)
			cout << "Rezultatul conversiei este: " << masa6_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, masa6) == 0 && strcmp(unitateMasuraCovertita, masa5) == 0)
			cout << "Rezultatul conversiei este: " << masa6_5(numar) << endl;
		//seterminamasa
		//incepe energia
		//enegerie1
		if (strcmp(unitateMasuraDeConvertit, energie1) == 0 && strcmp(unitateMasuraCovertita, energie2) == 0)
			cout << "Rezultatul conversiei este: " << energie1_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, energie1) == 0 && strcmp(unitateMasuraCovertita, energie3) == 0)
			cout << "Rezultatul conversiei este: " << energie1_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, energie1) == 0 && strcmp(unitateMasuraCovertita, energie5) == 0)
			cout << "Rezultatul conversiei este: " << energie1_5(numar) << endl;
		//energie2

		if (strcmp(unitateMasuraDeConvertit, energie2) == 0 && strcmp(unitateMasuraCovertita, energie1) == 0)
			cout << "Rezultatul conversiei este: " << energie2_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, energie2) == 0 && strcmp(unitateMasuraCovertita, energie3) == 0)
			cout << "Rezultatul conversiei este: " << energie2_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, energie2) == 0 && strcmp(unitateMasuraCovertita, energie4) == 0)
			cout << "Rezultatul conversiei este: " << energie2_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, energie2) == 0 && strcmp(unitateMasuraCovertita, energie5) == 0)
			cout << "Rezultatul conversiei este: " << energie2_5(numar) << endl;
		//energie3
		if (strcmp(unitateMasuraDeConvertit, energie3) == 0 && strcmp(unitateMasuraCovertita, energie1) == 0)
			cout << "Rezultatul conversiei este: " << energie3_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, energie3) == 0 && strcmp(unitateMasuraCovertita, energie2) == 0)
			cout << "Rezultatul conversiei este: " << energie3_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, energie3) == 0 && strcmp(unitateMasuraCovertita, energie4) == 0)
			cout << "Rezultatul conversiei este: " << energie3_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, energie3) == 0 && strcmp(unitateMasuraCovertita, energie5) == 0)
			cout << "Rezultatul conversiei este: " << energie3_5(numar) << endl;
		//energie4
		if (strcmp(unitateMasuraDeConvertit, energie4) == 0 && strcmp(unitateMasuraCovertita, energie1) == 0)
			cout << "Rezultatul conversiei este: " << energie4_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, energie4) == 0 && strcmp(unitateMasuraCovertita, energie2) == 0)
			cout << "Rezultatul conversiei este: " << energie4_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, energie4) == 0 && strcmp(unitateMasuraCovertita, energie3) == 0)
			cout << "Rezultatul conversiei este: " << energie4_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, energie4) == 0 && strcmp(unitateMasuraCovertita, energie5) == 0)
			cout << "Rezultatul conversiei este: " << energie4_5(numar) << endl;
		//energie5
		if (strcmp(unitateMasuraDeConvertit, energie5) == 0 && strcmp(unitateMasuraCovertita, energie1) == 0)
			cout << "Rezultatul conversiei este: " << energie5_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, energie5) == 0 && strcmp(unitateMasuraCovertita, energie2) == 0)
			cout << "Rezultatul conversiei este: " << energie5_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, energie5) == 0 && strcmp(unitateMasuraCovertita, energie3) == 0)
			cout << "Rezultatul conversiei este: " << energie5_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, energie5) == 0 && strcmp(unitateMasuraCovertita, energie4) == 0)
			cout << "Rezultatul conversiei este: " << energie5_4(numar) << endl;
		//se termina energia
		//incepe densitatea
		//densitate1
		if (strcmp(unitateMasuraDeConvertit, densitate1) == 0 && strcmp(unitateMasuraCovertita, densitate2) == 0)
			cout << "Rezultatul conversiei este: " << densitate1_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate1) == 0 && strcmp(unitateMasuraCovertita, densitate3) == 0)
			cout << "Rezultatul conversiei este: " << densitate1_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate1) == 0 && strcmp(unitateMasuraCovertita, densitate4) == 0)
			cout << "Rezultatul conversiei este: " << densitate1_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate1) == 0 && strcmp(unitateMasuraCovertita, densitate5) == 0)
			cout << "Rezultatul conversiei este: " << densitate1_5(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate1) == 0 && strcmp(unitateMasuraCovertita, densitate6) == 0)
			cout << "Rezultatul conversiei este: " << densitate1_6(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate1) == 0 && strcmp(unitateMasuraCovertita, densitate7) == 0)
			cout << "Rezultatul conversiei este: " << densitate1_7(numar) << endl;
		//densitate2

		if (strcmp(unitateMasuraDeConvertit, densitate2) == 0 && strcmp(unitateMasuraCovertita, densitate1) == 0)
			cout << "Rezultatul conversiei este: " << densitate2_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate2) == 0 && strcmp(unitateMasuraCovertita, densitate3) == 0)
			cout << "Rezultatul conversiei este: " << densitate2_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate2) == 0 && strcmp(unitateMasuraCovertita, densitate4) == 0)
			cout << "Rezultatul conversiei este: " << densitate2_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate2) == 0 && strcmp(unitateMasuraCovertita, densitate5) == 0)
			cout << "Rezultatul conversiei este: " << densitate2_5(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate2) == 0 && strcmp(unitateMasuraCovertita, densitate6) == 0)
			cout << "Rezultatul conversiei este: " << densitate2_6(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate2) == 0 && strcmp(unitateMasuraCovertita, densitate7) == 0)
			cout << "Rezultatul conversiei este: " << densitate2_7(numar) << endl;
		//densitate3

		if (strcmp(unitateMasuraDeConvertit, densitate3) == 0 && strcmp(unitateMasuraCovertita, densitate1) == 0)
			cout << "Rezultatul conversiei este: " << densitate3_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate3) == 0 && strcmp(unitateMasuraCovertita, densitate2) == 0)
			cout << "Rezultatul conversiei este: " << densitate3_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate3) == 0 && strcmp(unitateMasuraCovertita, densitate4) == 0)
			cout << "Rezultatul conversiei este: " << densitate3_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate3) == 0 && strcmp(unitateMasuraCovertita, densitate5) == 0)
			cout << "Rezultatul conversiei este: " << densitate3_5(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate3) == 0 && strcmp(unitateMasuraCovertita, densitate6) == 0)
			cout << "Rezultatul conversiei este: " << densitate3_6(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate3) == 0 && strcmp(unitateMasuraCovertita, densitate7) == 0)
			cout << "Rezultatul conversiei este: " << densitate3_7(numar) << endl;
		//densitate4
		if (strcmp(unitateMasuraDeConvertit, densitate4) == 0 && strcmp(unitateMasuraCovertita, densitate1) == 0)
			cout << "Rezultatul conversiei este: " << densitate4_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate4) == 0 && strcmp(unitateMasuraCovertita, densitate2) == 0)
			cout << "Rezultatul conversiei este: " << densitate4_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate4) == 0 && strcmp(unitateMasuraCovertita, densitate3) == 0)
			cout << "Rezultatul conversiei este: " << densitate4_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate4) == 0 && strcmp(unitateMasuraCovertita, densitate6) == 0)
			cout << "Rezultatul conversiei este: " << densitate4_6(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate4) == 0 && strcmp(unitateMasuraCovertita, densitate7) == 0)
			cout << "Rezultatul conversiei este: " << densitate4_7(numar) << endl;
		//densitate5

		if (strcmp(unitateMasuraDeConvertit, densitate5) == 0 && strcmp(unitateMasuraCovertita, densitate1) == 0)
			cout << "Rezultatul conversiei este: " << densitate5_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate5) == 0 && strcmp(unitateMasuraCovertita, densitate2) == 0)
			cout << "Rezultatul conversiei este: " << densitate5_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate5) == 0 && strcmp(unitateMasuraCovertita, densitate3) == 0)
			cout << "Rezultatul conversiei este: " << densitate5_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate5) == 0 && strcmp(unitateMasuraCovertita, densitate4) == 0)
			cout << "Rezultatul conversiei este: " << densitate5_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate5) == 0 && strcmp(unitateMasuraCovertita, densitate6) == 0)
			cout << "Rezultatul conversiei este: " << densitate5_6(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate5) == 0 && strcmp(unitateMasuraCovertita, densitate7) == 0)
			cout << "Rezultatul conversiei este: " << densitate5_7(numar) << endl;
		//densitate6
		if (strcmp(unitateMasuraDeConvertit, densitate6) == 0 && strcmp(unitateMasuraCovertita, densitate1) == 0)
			cout << "Rezultatul conversiei este: " << densitate6_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate6) == 0 && strcmp(unitateMasuraCovertita, densitate2) == 0)
			cout << "Rezultatul conversiei este: " << densitate6_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate6) == 0 && strcmp(unitateMasuraCovertita, densitate3) == 0)
			cout << "Rezultatul conversiei este: " << densitate6_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate6) == 0 && strcmp(unitateMasuraCovertita, densitate4) == 0)
			cout << "Rezultatul conversiei este: " << densitate6_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate6) == 0 && strcmp(unitateMasuraCovertita, densitate5) == 0)
			cout << "Rezultatul conversiei este: " << densitate6_5(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate6) == 0 && strcmp(unitateMasuraCovertita, densitate7) == 0)
			cout << "Rezultatul conversiei este: " << densitate6_7(numar) << endl;
		//densitate7
		if (strcmp(unitateMasuraDeConvertit, densitate7) == 0 && strcmp(unitateMasuraCovertita, densitate1) == 0)
			cout << "Rezultatul conversiei este: " << densitate7_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate7) == 0 && strcmp(unitateMasuraCovertita, densitate2) == 0)
			cout << "Rezultatul conversiei este: " << densitate7_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate7) == 0 && strcmp(unitateMasuraCovertita, densitate3) == 0)
			cout << "Rezultatul conversiei este: " << densitate7_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate7) == 0 && strcmp(unitateMasuraCovertita, densitate4) == 0)
			cout << "Rezultatul conversiei este: " << densitate7_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate7) == 0 && strcmp(unitateMasuraCovertita, densitate5) == 0)
			cout << "Rezultatul conversiei este: " << densitate7_5(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, densitate7) == 0 && strcmp(unitateMasuraCovertita, densitate6) == 0)
			cout << "Rezultatul conversiei este: " << densitate7_6(numar) << endl;
		//se termina densitatea
		//incepe aria
		//aria1
		if (strcmp(unitateMasuraDeConvertit, arie1) == 0 && strcmp(unitateMasuraCovertita, arie2) == 0)
			cout << "Rezultatul conversiei este: " << arie1_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie1) == 0 && strcmp(unitateMasuraCovertita, arie3) == 0)
			cout << "Rezultatul conversiei este: " << arie1_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie1) == 0 && strcmp(unitateMasuraCovertita, arie4) == 0)
			cout << "Rezultatul conversiei este: " << arie1_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie1) == 0 && strcmp(unitateMasuraCovertita, arie5) == 0)
			cout << "Rezultatul conversiei este: " << arie1_5(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie1) == 0 && strcmp(unitateMasuraCovertita, arie6) == 0)
			cout << "Rezultatul conversiei este: " << arie1_6(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie1) == 0 && strcmp(unitateMasuraCovertita, arie7) == 0)
			cout << "Rezultatul conversiei este: " << arie1_7(numar) << endl;
		//aria2
		if (strcmp(unitateMasuraDeConvertit, arie2) == 0 && strcmp(unitateMasuraCovertita, arie1) == 0)
			cout << "Rezultatul conversiei este: " << arie2_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie2) == 0 && strcmp(unitateMasuraCovertita, arie3) == 0)
			cout << "Rezultatul conversiei este: " << arie2_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie2) == 0 && strcmp(unitateMasuraCovertita, arie4) == 0)
			cout << "Rezultatul conversiei este: " << arie2_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie2) == 0 && strcmp(unitateMasuraCovertita, arie6) == 0)
			cout << "Rezultatul conversiei este: " << arie2_6(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie2) == 0 && strcmp(unitateMasuraCovertita, arie7) == 0)
			cout << "Rezultatul conversiei este: " << arie2_7(numar) << endl;
		//aria3
		if (strcmp(unitateMasuraDeConvertit, arie3) == 0 && strcmp(unitateMasuraCovertita, arie1) == 0)
			cout << "Rezultatul conversiei este: " << arie3_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie3) == 0 && strcmp(unitateMasuraCovertita, arie2) == 0)
			cout << "Rezultatul conversiei este: " << arie3_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie3) == 0 && strcmp(unitateMasuraCovertita, arie4) == 0)
			cout << "Rezultatul conversiei este: " << arie3_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie3) == 0 && strcmp(unitateMasuraCovertita, arie5) == 0)
			cout << "Rezultatul conversiei este: " << arie3_5(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie3) == 0 && strcmp(unitateMasuraCovertita, arie6) == 0)
			cout << "Rezultatul conversiei este: " << arie3_6(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie3) == 0 && strcmp(unitateMasuraCovertita, arie7) == 0)
			cout << "Rezultatul conversiei este: " << arie3_7(numar) << endl;
		//aria4
		if (strcmp(unitateMasuraDeConvertit, arie4) == 0 && strcmp(unitateMasuraCovertita, arie1) == 0)
			cout << "Rezultatul conversiei este: " << arie4_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie4) == 0 && strcmp(unitateMasuraCovertita, arie2) == 0)
			cout << "Rezultatul conversiei este: " << arie4_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie4) == 0 && strcmp(unitateMasuraCovertita, arie3) == 0)
			cout << "Rezultatul conversiei este: " << arie4_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie4) == 0 && strcmp(unitateMasuraCovertita, arie6) == 0)
			cout << "Rezultatul conversiei este: " << arie4_6(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie4) == 0 && strcmp(unitateMasuraCovertita, arie7) == 0)
			cout << "Rezultatul conversiei este: " << arie4_7(numar) << endl;
		//aria5
		if (strcmp(unitateMasuraDeConvertit, arie5) == 0 && strcmp(unitateMasuraCovertita, arie1) == 0)
			cout << "Rezultatul conversiei este: " << arie5_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie5) == 0 && strcmp(unitateMasuraCovertita, arie2) == 0)
			cout << "Rezultatul conversiei este: " << arie5_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie5) == 0 && strcmp(unitateMasuraCovertita, arie3) == 0)
			cout << "Rezultatul conversiei este: " << arie5_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie5) == 0 && strcmp(unitateMasuraCovertita, arie7) == 0)
			cout << "Rezultatul conversiei este: " << arie5_7(numar) << endl;
		//aria6
		if (strcmp(unitateMasuraDeConvertit, arie6) == 0 && strcmp(unitateMasuraCovertita, arie1) == 0)
			cout << "Rezultatul conversiei este: " << arie6_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie6) == 0 && strcmp(unitateMasuraCovertita, arie2) == 0)
			cout << "Rezultatul conversiei este: " << arie6_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie6) == 0 && strcmp(unitateMasuraCovertita, arie3) == 0)
			cout << "Rezultatul conversiei este: " << arie6_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie6) == 0 && strcmp(unitateMasuraCovertita, arie4) == 0)
			cout << "Rezultatul conversiei este: " << arie6_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie6) == 0 && strcmp(unitateMasuraCovertita, arie7) == 0)
			cout << "Rezultatul conversiei este: " << arie6_7(numar) << endl;
		//aria7
		if (strcmp(unitateMasuraDeConvertit, arie7) == 0 && strcmp(unitateMasuraCovertita, arie1) == 0)
			cout << "Rezultatul conversiei este: " << arie7_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie7) == 0 && strcmp(unitateMasuraCovertita, arie2) == 0)
			cout << "Rezultatul conversiei este: " << arie7_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie7) == 0 && strcmp(unitateMasuraCovertita, arie3) == 0)
			cout << "Rezultatul conversiei este: " << arie7_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie7) == 0 && strcmp(unitateMasuraCovertita, arie4) == 0)
			cout << "Rezultatul conversiei este: " << arie7_4(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie7) == 0 && strcmp(unitateMasuraCovertita, arie5) == 0)
			cout << "Rezultatul conversiei este: " << arie7_5(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, arie7) == 0 && strcmp(unitateMasuraCovertita, arie6) == 0)
			cout << "Rezultatul conversiei este: " << arie7_6(numar) << endl;
		//se termina aria
		//incepe forta
		//forta1
		if (strcmp(unitateMasuraDeConvertit, forta1) == 0 && strcmp(unitateMasuraCovertita, forta2) == 0)
			cout << "Rezultatul conversiei este: " << forta1_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, forta1) == 0 && strcmp(unitateMasuraCovertita, forta3) == 0)
			cout << "Rezultatul conversiei este: " << forta1_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, forta1) == 0 && strcmp(unitateMasuraCovertita, forta4) == 0)
			cout << "Rezultatul conversiei este: " << forta1_4(numar) << endl;
		//forta2

		if (strcmp(unitateMasuraDeConvertit, forta2) == 0 && strcmp(unitateMasuraCovertita, forta1) == 0)
			cout << "Rezultatul conversiei este: " << forta2_1(numar) << endl;
		if (strcmp(unitateMasuraDeConvertit, forta2) == 0 && strcmp(unitateMasuraCovertita, forta3) == 0)
			cout << "Rezultatul conversiei este: " << forta2_3(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, forta2) == 0 && strcmp(unitateMasuraCovertita, forta4) == 0)
			cout << "Rezultatul conversiei este: " << forta2_4(numar) << endl;
		//forta3

		if (strcmp(unitateMasuraDeConvertit, forta3) == 0 && strcmp(unitateMasuraCovertita, forta1) == 0)
			cout << "Rezultatul conversiei este: " << forta3_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, forta3) == 0 && strcmp(unitateMasuraCovertita, forta2) == 0)
			cout << "Rezultatul conversiei este: " << forta3_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, forta3) == 0 && strcmp(unitateMasuraCovertita, forta4) == 0)
			cout << "Rezultatul conversiei este: " << forta3_4(numar) << endl;
		//forta4

		if (strcmp(unitateMasuraDeConvertit, forta4) == 0 && strcmp(unitateMasuraCovertita, forta1) == 0)
			cout << "Rezultatul conversiei este: " << forta4_1(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, forta4) == 0 && strcmp(unitateMasuraCovertita, forta2) == 0)
			cout << "Rezultatul conversiei este: " << forta4_2(numar) << endl;

		if (strcmp(unitateMasuraDeConvertit, forta4) == 0 && strcmp(unitateMasuraCovertita, forta3) == 0)
			cout << "Rezultatul conversiei este: " << forta4_3(numar)<<endl;
		
		//se termina forta

	}

int main()
{/*
	cout << temperatura1_2(33);*/
	validareDateIntrare();
	return 0;
}

