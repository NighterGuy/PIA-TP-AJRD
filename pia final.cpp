/*PIA ALGORITMOS COMPUTACIONALES*/
/*EQUIPO NUMERO 3*/
#include <stdio.h>
#include <conio.h>
#include <cmath>
main(){
	int des,com,des2,ate;
	printf("********************************************************************************************\n");
	printf("                    Buenas tardes tenga somos computadoras fime3 \n\n\n");
	
	printf("preione 1 si desea comprar una computadora o 2 recibir asistencia tecnica de algun tecnico? \n");
	printf("            1...........................2\n");
	scanf("%d",&des);
	printf("********************************************************************************************\n");
	
    if(des==1){
    	printf("A elegido la opcion de comprar una computadora \n");
    	printf("A continuacion le mostrare nuestro catalogo y nuestras computadoras disponibles estos dias \n");
    	printf("Para que necesita la computadora? \n");
    	printf("1-Para la escuela \n");
    	printf("2-Para diseño \n");
    	printf("3-Para home office \n");
        printf("4-Para jugar videojuegos\n");
        printf("5-Una computadora de gama alta para cualquier tipo de trabajo a realizar\n");
        scanf("%d",&com);
        switch(com){
        	case 1:
        		printf("Usted a seleccionado computadora de escuela\n");
        		printf("A continuacion se le mostraran las especificaciones de esta computadora\n");
        		printf(" **********************************************************************************************\n");
        		printf("Procesador: Intel celeron dual core \n");
        		printf("Almacenamiento: 1tb dd\n");
        		printf("Tarjeta madre: gigabyte H310 M\n");
        		printf("tarjeta de video:graficos incluidos\n");
        		printf("Fuente de poder:400 wats generica\n");
         		printf("Ram: 4gb ddr3 \n");
         		printf("gabinete: generico\n");
         		printf("precio:$5000\n");
         		printf(" Puede pasar a recoger su computadora en nuestras instalaciones\n");
         		printf(" **********************************************************************************************\n");
				printf(" ************WWW.computadorasfime3.com************\n");
				printf(" **********************************************************************************************\n");
				printf(" ************8119180293************\n");
				printf(" **********************************************************************************************\n");
				printf(" Tenga bonita tarde se lo desea computadoras fime3\n");
        		break;
        	case 2:
        		printf("Usted a seleccionado computadora para diseño\n");
        		printf("A continuacion se le mostraran las especificaciones de esta computadora\n");
        		printf(" **********************************************************************************************\n");
        		printf("Procesador: intel i5 9900f\n");
        		printf("Almacenamiento: 960gb ssd+ 3tb dd\n");
        		printf("Tarjeta madre:gigabyte H310 \n");
        		printf("tarjeta de video:Quadro NVIDIA K600  \n");
        		printf("Fuente de poder: 600 wats certificada \n");
         		printf("Ram:32gb 3000Mhz ddr4 \n");
         		printf("gabinete: gabinete rgb a escoger en la tienda  \n");
         		printf("precio:$10000  \n");
         		printf(" Puede pasar a recoger su computadora en nuestras instalaciones\n");
         		printf(" **********************************************************************************************\n");
				printf(" ************WWW.computadorasfime3.com************\n");
				printf(" **********************************************************************************************\n");
				printf(" ************8119180293************\n");
				printf(" **********************************************************************************************\n");
				printf(" Tenga bonita tarde se lo desea computadoras fime3\n");
        		break;
        	case 3:
        		printf("Usted a seleccionado computadora para home office\n");
        		printf("A continuacion se le mostraran las especificaciones de esta computadora\n");
        		printf(" **********************************************************************************************\n");
        		printf("Procesador: ryzen 5 3400g\n");
        		printf("Almacenamiento: 128gb ssd+ 1tb dd\n");
        		printf("Tarjeta madre: Gigabyte B450 DS3H\n");
        		printf("tarjeta de video: vega 11 \n");
        		printf("Fuente de poder: 500 wats certificada \n");
         		printf("Ram:  16gb drr4 3000Mhz \n");
         		printf("gabinete:  gabinete rgb a escoger en la tienda \n");
         		printf("precio:$7500 \n");
         		printf(" Puede pasar a recoger su computadora en nuestras instalaciones\n");
         		printf(" **********************************************************************************************\n");
				printf(" ************WWW.computadorasfime3.com************\n");
				printf(" **********************************************************************************************\n");
				printf(" ************8119180293************\n");
				printf(" **********************************************************************************************\n");
				printf(" Tenga bonita tarde se lo desea computadoras fime3\n");
        		break;
        	case 4:
        		printf("Usted a seleccionado computadora gamer\n");
        		printf("A continuacion se le mostraran las especificaciones de esta computadora\n");
        		printf(" **********************************************************************************************\n");
        		printf("Procesador:Ryzen 7 3700x \n");
        		printf("Almacenamiento: 960gb ssd+ 1tb dd\n \n");
        		printf("Tarjeta madre: Gigabyte B450 DS3H\n");
        		printf("tarjeta de video:Rx 5600 6gb ddr5  \n");
        		printf("Fuente de poder:600 wats certificada \n");
         		printf("Ram:32gb 3200Mhz ddr4 rgb   \n");
         		printf("gabinete:Gabinete rgb a escoger en la tienda   \n");
         		printf("precio:$16000  \n");
         		printf(" Puede pasar a recoger su computadora en nuestras instalaciones\n");
         		printf(" **********************************************************************************************\n");
				printf(" ************WWW.computadorasfime3.com************\n");
				printf(" **********************************************************************************************\n");
				printf(" ************8119180293************\n");
				printf(" **********************************************************************************************\n");
				printf(" Tenga bonita tarde se lo desea computadoras fime3\n");
        		break;
        	case 5:
        		printf("Usted a seleccionado computadora de gama alta\n");
        		printf("A continuacion se le mostraran las especificaciones de esta computadora\n");
        		printf(" **********************************************************************************************\n");
        		printf("Procesador:Intel i7 9700\n");
        		printf("Almacenamiento:960gb ssd+ 4tb dd\n");
        		printf("Tarjeta madre:Mobo asus b360 plus tuf \n");
        		printf("tarjeta de video:Rtx 2080 8gb ddr5 \n");
        		printf("Fuente de poder: 600 wats certificada \n");
         		printf("Ram:32gb 3200Mhz ddr4 rgb \n");
         		printf("gabinete:Gabinete rgb a escoger en la tienda    \n");
         		printf("precio:$27000   \n");
         		printf(" Puede pasar a recoger su computadora en nuestras instalaciones\n");
         		printf(" **********************************************************************************************\n");
				printf(" ************WWW.computadorasfime3.com************\n");
				printf(" **********************************************************************************************\n");
				printf(" ************8119180293************\n");
				printf(" **********************************************************************************************\n");
				printf(" Tenga bonita tarde se lo desea computadoras fime3\n");
        		break;
        		
            default:
        		printf("El numero no concuerda con ninguna de nuestras computadoras disponibles \n");		
		} 
    	
	}else
		{
			printf(" A elegido la opcion de recibir asistencia tecnica de algun tecnico de nuestra empresa\n");
			printf("A continuacion le mostrare una lista de problemas más comunes \n");
			printf("Presione el numero dependiendo el eror porfavor\n");
			printf("1-Su computadora esta lenta\n");
			printf("2-Poco espacio en su computadora\n");
			printf("3-Tarda mucho en prender\n");
			printf("4-Se calienta mucho\n");
			printf("6-No enciende\n");
			printf("7-Su problema no esta aqui\n");
			scanf("%d",&ate);
			switch(ate){
				case 1:
				printf("Si su computadora esta lenta, esto se debe a varios factores: \n");
				printf("1. Desorden acumulado de archivos innecesarios\n");
				printf("2. Archivos grafmentados del disco duro\n");
				printf("3. Tiene instalados programas que se usan en segundo plano inncesearios \n");
				printf("4. Archivos centrales del sistema operativo fragmentados \n");
				printf("5. Deterioro de la memoria Ram \n");
				printf("6. Controladores obsoletos del hardware \n");
				printf("7. Su computadora necesita actualizarse \n");
				printf("8. El disco duro esta lleno \n\n");
				printf(" **********************************************************************************************\n");
				printf("Estas son algunas razones por las cuales su computadora puede estar lenta\n");
				printf(" **********************************************************************************************\n");
				printf("A continuacion le muestro algunas soluciones que pueden ayudar a cierto problema o varios en general\n");
				printf("1. Cambiar el disco duro por un disco solido, estos discos son mas rapidos y duraderos \n");
				printf("2. Cambiar la memoria ram a una de mayor capacidad o mayor Mhz \n");
				printf("3. Agregar mas memoria ram \n");
				printf("4. Reinstalar el sistema operativo \n");
				printf("5. Reiniciar la computadora a fabrica y instalar el sistema operativo \n");
				printf("6. Actualizar su sistema operativo \n");
				printf(" **********************************************************************************************\n");
				printf(" Esas han sido algunas posibles soluciones a sus problemas con su computadora \n");
				printf(" Si no le ah servido ninguna de estas opciones puede acudir a nuestros centros de mantenimiento\n");
				printf(" Recuerde que todos los componentes los puede comprar en nuestras tiendas\n");
				printf(" Tenemos nuestra pagina online la cual es:\n");
				printf(" ************WWW.computadorasfime3.com************\n");
				printf(" Tambien tenemos nuestros telefonos por lo cual puede llamar para hablar con especialista\n");
				printf(" ************8119180293************\n");
				printf(" Tenga bonita tarde se lo desea computadoras fime3\n");

				break;
				case 2:
				printf(" Si su computadora le hace falta espacio  puede acudir a nuestras instalaciones\n");
				printf(" Donde la atendera un profesional \n");
				printf(" Recuerde que todos los componentes los puede comprar en nuestras tiendas\n");
				printf(" Tenemos nuestra pagina online la cual es:\n");
				printf(" ************WWW.computadorasfime3.com************\n");
				printf(" Tambien tenemos nuestros telefonos por lo cual puede llamar para hablar con especialista\n");
				printf(" ************8119180293************\n");
				printf(" Tenga bonita tarde se lo desea computadoras fime3\n");

				break;
				case 3:
				printf("Estas son algunas razones por las cuales su computadora tarda en prender\n");
				printf(" **********************************************************************************************\n");
				printf("A continuacion le muestro algunas soluciones que pueden ayudar a cierto problema o varios en general\n");
				printf(" **********************************************************************************************\n");
				printf("1. Cambiar el disco duro por un disco solido, estos discos son mas rapidos y duraderos \n");
				printf("2. Cambiar la memoria ram a una de mayor capacidad o mayor Mhz \n");
				printf("3. Agregar mas memoria ram \n");
				printf("4. Reinstalar el sistema operativo \n");
				printf("5. Reiniciar la computadora a fabrica y instalar el sistema operativo \n");
				printf("6. Actualizar su sistema operativo \n");
				printf(" **********************************************************************************************\n");
				printf(" Esas han sido algunas posibles soluciones a sus problemas con su computadora \n");
				printf(" Si no le ah servido ninguna de estas opciones puede acudir a nuestros centros de mantenimiento\n");
				printf(" Recuerde que todos los componentes los puede comprar en nuestras tiendas\n");
				printf(" Tenemos nuestra pagina online la cual es:\n");
				printf(" ************WWW.computadorasfime3.com************\n");
				printf(" Tambien tenemos nuestros telefonos por lo cual puede llamar para hablar con especialista\n");
				printf(" ************8119180293************\n");
				printf(" Tenga bonita tarde se lo desea computadoras fime3\n");
				break;
				case 4:
				printf("Estas son algunas razones por las cuales su computadora se calienta mucho \n");
				printf("1. Esta colocada en un lugar muy caliente en el cual no adquiere buena ventilacion \n");
				printf("2. El discipidor de calor no esta funcionando bien \n");
				printf("3. Hace falta cambiar pasta termica \n");
				printf("4. Le hace falta mantenimiento\n");
				printf("5. Usa una mala fuente de alimentacion \n");
				printf("6. Esta sucia la computadora \n");
				printf(" **********************************************************************************************\n");
				printf("A continuacion le muestro algunas soluciones que pueden ayudar a cierto problema o varios en general\n");
				printf(" **********************************************************************************************\n");
				printf("1. Cambiar el discipador por uno mejor \n");
				printf("2. Cambiar el gabinete\n");
				printf("3. Cambiar la fuente de alimentacion por una certificada \n");
				printf("4. Cambiar el lugar donde esta colocada \n");
				printf("5. Agregar una pasta termica de mejor calidad \n");
				printf("6. Agregar ventiladores al gabinete \n");
				printf("7. Limpiarla y hacerle mantenimiento \n");
				printf(" **********************************************************************************************\n");
				printf(" Esas han sido algunas posibles soluciones a sus problemas con su computadora \n");
				printf(" Si no le ah servido ninguna de estas opciones puede acudir a nuestros centros de mantenimiento\n");
				printf(" Recuerde que todos los componentes los puede comprar en nuestras tiendas\n");
				printf(" Tenemos nuestra pagina online la cual es:\n");
				printf(" ************WWW.computadorasfime3.com************\n");
				printf(" Tambien tenemos nuestros telefonos por lo cual puede llamar para hablar con especialista\n");
				printf(" ************8119180293************\n");
				printf(" Tenga bonita tarde se lo desea computadoras fime3\n");
				break;
				case 5:
				printf(" Si su computadora no enciende se le recomienda llamar a uno de nuestros profesionales \n");
				printf(" A continuacion estan nuestros contactos en donde un profesional con gusto lo atendera\n");
				printf(" **********************************************************************************************\n");
				printf(" ************WWW.computadorasfime3.com************\n");
				printf(" **********************************************************************************************\n");
				printf(" ************8119180293************\n");
				printf(" **********************************************************************************************\n");
				printf(" Tenga bonita tarde se lo desea computadoras fime3\n");
				break;
				case 6:
				printf(" Si su problema no se muestra aqui se le recomienda llamar a uno de nuestros profesionales \n");
				printf(" A continuacion estan nuestros contactos en donde un profesional con gusto lo atendera\n");
				printf(" **********************************************************************************************\n");
				printf(" ************WWW.computadorasfime3.com************\n");
				printf(" **********************************************************************************************\n");
				printf(" ************8119180293************\n");
				printf(" **********************************************************************************************\n");
				printf(" Tenga bonita tarde se lo desea computadoras fime3\n");
				break;
			    default:
				printf("El numero no concuerda con ninguna opcion dada \n");
			
			}
			
			
		}
	
	getche();
	return 0;	
	}	
	
	
