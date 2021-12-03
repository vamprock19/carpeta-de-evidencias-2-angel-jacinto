#include <string>
#include <iostream>
#include <conio.h>
using namespace std;



int main()
{

	setlocale(LC_ALL, "spanish");
	int menu;
	cout << "Bienvenido a fantasy land" << endl << endl;
	cout << "El objetivo es rescatar a la princesa del castillo. cuidado con el dragon" << endl << endl;

	// menu -----------------------------------------------------------------------------------------------------------------------------------------------------------
	cout << "1. Jugar\n" << "0. Salir\n" << endl;
	cin >> menu;
	system("pause");
	system("ClS");
	switch (menu)
	{
	case 0:
		cout << "bye bye " << endl;
		break;


	case 1:
		cout << "" << endl;
		cout << "Eres un caballero soltero, la única mujer\n"
			<< "que deseas se encuentra encerrada en la torre\n"
			<< "más alta de un castillo, pero hay un dragon lanza\n"
			<< "fuego.tu deber es rescatar a la princesa para poder\n"
			<< "casarte con ella y vivir felices por siempre" << endl << endl;

		system("pause"); cout << endl << endl;
		system("ClS");

		cout << "te aproximas a la entrada. tienes 2 opciones." << endl << endl;


		// entrada---------------------------------------------------------------------------------------------------------------------------------------------------------
		int entrada;

		cout << "0. Tocar la puerta \n" << "1. Buscar una manera de entrar sin hacer ruido" << endl << endl;
		cin >> entrada;

		switch (entrada)
		{
		case 0:
			cout << " has hecho mucho ruido tocando la puerta del castillo,\n"
				<< "has despertado a el dragon.ha salido y te ha quemado vivo.GAME OVER.\n" << endl;
			break;
			return 0;



		case 1:
			cout << "por más que has buscado, la única manera de  entrar a el castillo es escalando" << endl;
			cout << endl << endl;
			system("pause"); cout << endl << endl;
			system("ClS");





			//cambio de armas----------------------------------------------------------------------------------------------------------------------------------------------
			cout << "has cojido un lazo y escalado la muralla del castillo.\n"
				<< "entras a las sala principal y ves muchos cadáveres, huesos,\n"
				<< "desechos humanos y cráneos de caballeros qué intentaron lo\n"
				<< "mismo que tu, pero es notable qué fracasaron en el intento y \n"
				<< "perdieron sus vidas." << endl << endl;
			system("pause"); cout << endl << endl;
			system("ClS");
			cout << "observas varias armas de los caballeros caidos./n" << endl;
			cout << "cambia tu espada por otra espada, o quedarte con tu espada" << endl;
			system("pause"); cout << endl << endl;
			system("ClS");
			int cambio_de_armas;
			cout << "0. 2nd espada\n" << "1. no cambiar nada\n" << endl << endl;
			system("pause");
			system("CLS");
			cin >> cambio_de_armas;
			switch (cambio_de_armas)
			{
			case 0:
				cout << "has cambiado tu espada " << endl;

			case 1:
				cout << "no has cambiado nada " << endl;
				



				//inspeccion de cadaver---------------------------------------------------------------------------------------------------------------------------------------
				cout << "con las armas que tomaste, te aproximas a el salón principal donde\n"
					<< "los grandes una vez bailaban y disfrutaban eventos. mientras inscepccionabas\n"
					<< "el salón, escuchas susurros proveniendo de la cocina del castillo.te aproximas\n"
					<< "y ves una figura desconocida la inspeccionas y de repente trata de atacarte un\n"
					<< "esqueleto viviente. Desfundas tu espada lo atacas al instante y lo matas\n"
					<< endl;
				system("pause");
				system("CLS");

				int inspeccion;
				cout << "0. inspeccionas el cadaver.\n"
					 << "1. Lo ignoras y sigues tu camino." << endl << endl;
				cin >> inspeccion;
				switch (inspeccion)
				{

				case 0:
					cout << "has agarrado un hueso de un cadaver" << endl;



				case 1:
					cout << "has ignorado el cadaver y seguido tu camino" << endl << endl;
					system("pause");
					system("CLS");




					// ver dragon-----------------------------------------------------------------------------------------------------------------------------------------------
					cout << "despues de haberlo matado pasas por el calabozo.\n"
						<< "Agarras y prendes una antorcha, ves ratas pasando por\n"
						<< "tus laterales, y esqueletos en las celdas. al final del\n"
						<< "tunel del calabozo ves una gran luz, te aproximas a ella.\n"
						<< "por primera vez en tu vida vez a un dragon rojo durmiendo\n"
						<< "piensas.. recojo una piedra para aventarla para ver si\n"
						<< "o es una ilucion, o lo inspecciono de lejos y continuo mi\n"
						<< "camino hacia la torre mas alta"
						<< endl << endl;
					system("pause");
					system("CLS");

					int ver_dragon;
					cout << "0. Arrojar piedra\n" << "1. ver al dragon de lejos\n" << endl << endl;
					cin >> ver_dragon;
					switch (ver_dragon)
					{
					case 0:
						cout << "despertaste al dragon. Se enojo y te quemo vivio" << endl << endl;
						break;
						return 0;
						
					

					case 1:
						cout << "los dragones son maravillosas creaturas pero muy son muy mortiferas\n" << endl;
						system("pause");
						system("CLS");



						// cuestionamiento----------------------------------------------------------------------------------------------------

						cout << "despues del encuentro con la princesa,\n"
							<< "empieza a cuestionarte para ver si eres digno\n"
							<< "de su compañia" << endl;
						system("pause");
						system("CLS");
						int cuestionamiento;
						cout << "0. vine a rescatarte porque soy un caballero y ese es mi oficio\n"
							<< "1. vine a rescatarte porque soy un caballero y quiero casarme conmtigo" << endl;
						cin >> cuestionamiento;
						system("pause");
						system("CLS");
						switch (cuestionamiento)
						{
						case 0:
							cout << "Pues a si no me interesas. que me rescate otro." << endl;

							system("pause");
							system("CLS");

							// cadenas esposas--------------------------------------------------------------------------------------------
							cout << "La tomas de las piernas y la llevas cargada afuera en contra de su voluntad\n"
								<< "en lo que te aproximas a el patio del castillo, ves una cuerda y unas esposas" << endl;
							system("pause");
							system("CLS");
							int amarre;
							cout << "0. Amarrarla de a pies y brazos\n" << "1. Esposarla " << endl;
							cin >> amarre;
							system("pause");
							system("CLS");


							switch (amarre)
							{
							case 0:
								cout << "Tu nivel de caballerosidad ha bajado, pero la has amarrado" << endl;
								system("pause");
								system("CLS");
								// soltar princesa--------------------------------------------------------------------------------
								cout << "Estas en el patio. El dragon esta alli esperandote,\n"
									<< "dado que los gritos de la princesa lo despertaron.\n"
									<< "Preparate para la batalla." << endl;
								system("pause");
								system("CLS");
								int soltar_princesa;
								cout << "0. Soltar a la princesa\n"
									<< "1. Sugetar bien a la princesa." << endl;
								cin >> soltar_princesa;
								system("pause");
								system("CLS");

								switch (soltar_princesa)
								{
								case 0:
									cout << "Desenfundas tu espada. El dragon te lanza una bola\n"
										<< "de fuego y con tu escudo la logras combatirla.\n"
										<< "Utilizas tu espada y matas a el dragon.\n"
										<< "La princesa se te escapo por combatir a el dragon.\n" << endl;
									system("pause");
									system("CLS");
									// FIN 800 denarios --------------------------------------------------------------------------------------------------------
									cout << "Pero luego la encuentras. la agarras y la sacas del castillo\n"
										<< "como no te queria, la  vendes como esclava por 800 denarios.\n"
										<< "Dejas de ser un caballero digno de ser mencionado y te quedas soltero." << endl;
									system("pause");
									system("CLS");
									cout << "FIN" << endl;
									break;
									return 0;

								case 1:
									cout << "Por sujetar a la princesa, no has podido usar tu escudo\n"
										<< "apropiadamente en contra de la bola de fuego del dragon,\n"
										<< "enves usaste a la princesa como escudo humano.\n"
										<< "Desenfundas tu espada y matas a el dragon\n"
										<< endl;
									system("pause");
									system("CLS");


									// final soltero y sin dinero -------------------------------------------------------------------------------------
									cout << "Dejaste que muriera la princesa.\n"
										<< "Te quedaste solo y tu caballerosidad\n"
										<< "esta en duda" << endl;
									system("pause");
									system("CLS");
									cout << "FIN" << endl;
									break;
									return 0;

								}

							case 1:
								cout << "la has esposado" << endl;

								// fin 500 denarios ------------------------------------------------------------------------------------------------------
								cout << "Salen a el patio principal. Ves a el dragon alli durmiendo\n"
									<< "Lo rodean sin hacer ruido. Rompes una parte de la puerta.\n"
									<< "Salen del castillo y como la princesa te desprecia,\n."
									<< "la vendes por 500 denarios y te quedas soltero" << endl;
								system("pause");
								system("CLS");
								cout << "FIN" << endl;
								break;
								return 0;


							}

						case 1:
							cout << "Maravilloso. Eres muy sexy" << endl;
							system("pause");
							system("CLS");

							cout << "Salen a el patio del castillo. Ven a el dragon\n"
								<< "Pasan alrededor del dragon sin hacer ruido y salen\n"
								<< "del castillo" << endl;
							system("pause");
							system("CLS");

							//matrimonio FIN-------------------------------------------------------------
							cout << "despues de la aventura en el castillo, decides ir al grano con ella\n"
								<< "le pides matrimonio" << endl;
								system("pause");
							system("CLS");
							
							int matrimonio;
							cout << "0. Anillo de plata\n" << "1. Anillo de oro\n" << endl;
							cin >> matrimonio;
							switch (matrimonio)
							{
							case 0:
								cout << " Acepto casarme contigo pero luego busco a alguien\n"
									<< "que tenga mas dinero en el bolsillo" << endl;
								system("pause");
								system("CLS");
								cout << "FIN" << endl;
								break;
								return 0;

							case 1:
								cout << "Acepto casarme contigo por toda la eternidad" << endl;
								system("pause");
								system("CLS");
								cout << "FIN" << endl;
								break;
								return 0;
							}
						}

						



					}





					return 0;
				}

				return 0;
			}

			return 0;
		}
		return 0;
	}
	return 0;
}




