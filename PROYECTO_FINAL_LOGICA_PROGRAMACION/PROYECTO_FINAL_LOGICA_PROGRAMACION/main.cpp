#include <allegro.h>
#include <time.h>
#include <iostream>
#include "inicia.h"

int comenzar();
int ganador(int,int);
void cronometro();

using namespace std;

int minutos=0, segundos=0, mili=0;
int main ()
{

    inicia_allegro(800,530);
    inicia_audio(70,70);
    install_mouse();

    BITMAP *buffer = create_bitmap(800,530);
    BITMAP *menu  = load_bitmap("menu.bmp",NULL);
    BITMAP *menu1 = load_bitmap("menu1.bmp",NULL);
    BITMAP *menu2 = load_bitmap("menu2.bmp",NULL);
    BITMAP *menu3 = load_bitmap("menu3.bmp",NULL);
    BITMAP *cursor=load_bitmap("Cursor.bmp",NULL);
    BITMAP *instructivo=load_bitmap("instructivo.bmp",NULL);
    BITMAP *instructivo1=load_bitmap("instructivo1.bmp",NULL);
    BITMAP *instructivo2=load_bitmap("instructivo2.bmp",NULL);
    BITMAP *tablero=load_bitmap("Tablero.bmp",NULL);
    BITMAP *vertical=load_bitmap("vertical.bmp",NULL);
    BITMAP *horizontal=load_bitmap("horizontal.bmp",NULL);
    BITMAP *jugador1=load_bitmap("jugador1.bmp",NULL);
    BITMAP *jugador2=load_bitmap("jugador2.bmp",NULL);
    BITMAP *flecha=load_bitmap("flecha.bmp",NULL);
    BITMAP *jug1=load_bitmap("jug1.bmp",NULL);
    BITMAP *jug2=load_bitmap("jug2.bmp",NULL);
    BITMAP *n1=load_bitmap("n1.bmp",NULL);
    BITMAP *n2=load_bitmap("n2.bmp",NULL);
    BITMAP *n3=load_bitmap("n3.bmp",NULL);
    BITMAP *n4=load_bitmap("n4.bmp",NULL);
    BITMAP *n5=load_bitmap("n5.bmp",NULL);
    BITMAP *n6=load_bitmap("n6.bmp",NULL);
    BITMAP *n7=load_bitmap("n7.bmp",NULL);
    BITMAP *n8=load_bitmap("n8.bmp",NULL);
    BITMAP *n9=load_bitmap("n9.bmp",NULL);
    BITMAP *n10=load_bitmap("n10.bmp",NULL);
    BITMAP *n11=load_bitmap("n11.bmp",NULL);
    BITMAP *n12=load_bitmap("n12.bmp",NULL);
    BITMAP *n13=load_bitmap("n13.bmp",NULL);
    BITMAP *n14=load_bitmap("n14.bmp",NULL);
    BITMAP *n15=load_bitmap("n15.bmp",NULL);
    BITMAP *n16=load_bitmap("n16.bmp",NULL);
    BITMAP *n17=load_bitmap("n17.bmp",NULL);
    BITMAP *n18=load_bitmap("n18.bmp",NULL);
    BITMAP *n19=load_bitmap("n19.bmp",NULL);
    BITMAP *n20=load_bitmap("n20.bmp",NULL);
    BITMAP *n21=load_bitmap("n21.bmp",NULL);
    BITMAP *n22=load_bitmap("n22.bmp",NULL);
    BITMAP *n23=load_bitmap("n23.bmp",NULL);
    BITMAP *n24=load_bitmap("n24.bmp",NULL);
    BITMAP *n25=load_bitmap("n25.bmp",NULL);
    BITMAP *vic1=load_bitmap("victoria1.bmp",NULL);
    BITMAP *vic2=load_bitmap("victoria2.bmp",NULL);
    int aux;

    //0 es Falso y 1 es verdadero
    // declaracion de
    int horizontales[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int verticales[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int cuadros[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int figura[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int cont1=0, cont2=0;
    int pasar=1;
    int empieza;
    bool jugar=false;
    bool instrucciones=false;
    bool salir=false;
    bool victoria=true;
    while(!salir)
    {
        if(mouse_x>40&&mouse_x<290&&mouse_y>337&&mouse_y<411)
        {
            blit(menu1,buffer,0,0,0,0,800,530);
            if(mouse_b & 1)
            {
                jugar=true;
                empieza=comenzar();
                while(jugar)
                {
                    victoria=true;
                    pasar=0;
                    while(pasar==0)
                    {
                            masked_blit(cursor,buffer,0,0,mouse_x,mouse_y,30,30);
                            blit(buffer,screen,0,0,0,0,800,530);
                            textprintf_ex(screen,font,670,503,makeacol(160,0,0,0),-1,"%d:%d:%d",minutos,segundos,mili);
                            rest(10);
                            mili++;
                        cronometro();
                        blit(tablero,buffer,0,0,0,0,800,530);
                        if (empieza==0)
                            blit(flecha,buffer,0,0,49,30,30,30);
                        else if (empieza ==1)
                            blit(flecha,buffer,0,0,440,30,30,30);
                        //se validaron lineas horizontalses
                        //primera fila

                        if(mouse_x>70&&mouse_x<190&&mouse_y>80&&mouse_y<97)
                        {
                            if((mouse_b & 1)&&(horizontales[0]==0))
                            {
                                horizontales[0]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>202&&mouse_x<319&&mouse_y>80&&mouse_y<97)
                        {
                            if((mouse_b & 1)&&(horizontales[1]==0))
                            {
                                horizontales[1]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>333&&mouse_x<451&&mouse_y>80&&mouse_y<97)
                        {
                            if((mouse_b & 1)&&(horizontales[2]==0))
                            {
                                horizontales[2]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>463&&mouse_x<580&&mouse_y>80&&mouse_y<97)
                        {
                            if((mouse_b & 1)&&(horizontales[3]==0))
                            {
                                horizontales[3]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>592&&mouse_x<710&&mouse_y>80&&mouse_y<97)
                        {
                            if((mouse_b & 1)&&(horizontales[4]==0))
                            {
                                horizontales[4]=1;
                                pasar=1;
                            }
                        }
                        //Segunda fila
                        if(mouse_x>70&&mouse_x<190&&mouse_y>157&&mouse_y<174)
                        {
                            if((mouse_b & 1)&&(horizontales[5]==0))
                            {
                                horizontales[5]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>202&&mouse_x<319&&mouse_y>157&&mouse_y<174)
                        {
                            if((mouse_b & 1)&&(horizontales[6]==0))
                            {
                                horizontales[6]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>333&&mouse_x<451&&mouse_y>157&&mouse_y<174)
                        {
                            if((mouse_b & 1)&&(horizontales[7]==0))
                            {
                                horizontales[7]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>463&&mouse_x<580&&mouse_y>157&&mouse_y<174)
                        {
                            if((mouse_b & 1)&&(horizontales[8]==0))
                            {
                                horizontales[8]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>592&&mouse_x<710&&mouse_y>157&&mouse_y<174)
                        {
                            if((mouse_b & 1)&&(horizontales[9]==0))
                            {
                                horizontales[9]=1;
                                pasar=1;
                            }
                        }
                        //tercer fila
                        if(mouse_x>70&&mouse_x<190&&mouse_y>234&&mouse_y<251)
                        {
                            if((mouse_b & 1)&&(horizontales[10]==0))
                            {
                                horizontales[10]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>202&&mouse_x<319&&mouse_y>234&&mouse_y<251)
                        {
                            if((mouse_b & 1)&&(horizontales[11]==0))
                            {
                                horizontales[11]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>333&&mouse_x<451&&mouse_y>234&&mouse_y<251)
                        {
                            if((mouse_b & 1)&&(horizontales[12]==0))
                            {
                                horizontales[12]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>463&&mouse_x<580&&mouse_y>234&&mouse_y<251)
                        {
                            if((mouse_b & 1)&&(horizontales[13]==0))
                            {
                                horizontales[13]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>592&&mouse_x<710&&mouse_y>234&&mouse_y<251)
                        {
                            if((mouse_b & 1)&&(horizontales[14]==0))
                            {
                                horizontales[14]=1;
                                pasar=1;
                            }
                        }
                        //cuarta fila
                        if(mouse_x>70&&mouse_x<190&&mouse_y>311&&mouse_y<328)
                        {
                            if((mouse_b & 1)&&(horizontales[15]==0))
                            {
                                horizontales[15]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>202&&mouse_x<319&&mouse_y>311&&mouse_y<328)
                        {
                            if((mouse_b & 1)&&(horizontales[16]==0))
                            {
                                horizontales[16]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>333&&mouse_x<451&&mouse_y>311&&mouse_y<328)
                        {
                            if((mouse_b & 1)&&(horizontales[17]==0))
                            {
                                horizontales[17]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>463&&mouse_x<580&&mouse_y>311&&mouse_y<328)
                        {
                            if((mouse_b & 1)&&(horizontales[18]==0))
                            {
                                horizontales[18]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>592&&mouse_x<710&&mouse_y>311&&mouse_y<328)
                        {
                            if((mouse_b & 1)&&(horizontales[19]==0))
                            {
                                horizontales[19]=1;
                                pasar=1;
                            }
                        }
                        //quinta fila
                        if(mouse_x>70&&mouse_x<190&&mouse_y>388&&mouse_y<405)
                        {
                            if((mouse_b & 1)&&(horizontales[20]==0))
                            {
                                horizontales[20]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>202&&mouse_x<319&&mouse_y>388&&mouse_y<405)
                        {
                            if((mouse_b & 1)&&(horizontales[21]==0))
                            {
                                horizontales[21]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>333&&mouse_x<451&&mouse_y>388&&mouse_y<405)
                        {
                            if((mouse_b & 1)&&(horizontales[22]==0))
                            {
                                horizontales[22]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>463&&mouse_x<580&&mouse_y>388&&mouse_y<405)
                        {
                            if((mouse_b & 1)&&(horizontales[23]==0))
                            {
                                horizontales[23]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>592&&mouse_x<710&&mouse_y>388&&mouse_y<405)
                        {
                            if((mouse_b & 1)&&(horizontales[24]==0))
                            {
                                horizontales[24]=1;
                                pasar=1;
                            }
                        }
                        //sexta fila
                         if(mouse_x>70&&mouse_x<190&&mouse_y>465&&mouse_y<482)
                        {
                            if((mouse_b & 1)&&(horizontales[25]==0))
                            {
                                horizontales[25]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>202&&mouse_x<319&&mouse_y>465&&mouse_y<482)
                        {
                            if((mouse_b & 1)&&(horizontales[26]==0))
                            {
                                horizontales[26]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>333&&mouse_x<451&&mouse_y>465&&mouse_y<482)
                        {
                            if((mouse_b & 1)&&(horizontales[27]==0))
                            {
                                horizontales[27]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>463&&mouse_x<580&&mouse_y>465&&mouse_y<482)
                        {
                            if((mouse_b & 1)&&(horizontales[28]==0))
                            {
                                horizontales[28]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>592&&mouse_x<710&&mouse_y>465&&mouse_y<482)
                        {
                            if((mouse_b & 1)&&(horizontales[29]==0))
                            {
                                horizontales[29]=1;
                                pasar=1;
                            }
                        }
                        //verificar barras verticales
                        //primera fila
                        if(mouse_x>56&&mouse_x<73&&mouse_y>94&&mouse_y<160)
                        {
                            if((mouse_b & 1)&&(verticales[0]==0))
                            {
                                verticales[0]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>189&&mouse_x<205&&mouse_y>94&&mouse_y<160)
                        {
                            if((mouse_b & 1)&&(verticales[1]==0))
                            {
                                verticales[1]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>317&&mouse_x<334&&mouse_y>94&&mouse_y<160)
                        {
                            if((mouse_b & 1)&&(verticales[2]==0))
                            {
                                verticales[2]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>449&&mouse_x<466&&mouse_y>94&&mouse_y<160)
                        {
                            if((mouse_b & 1)&&(verticales[3]==0))
                            {
                                verticales[3]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>579&&mouse_x<596&&mouse_y>94&&mouse_y<160)
                        {
                            if((mouse_b & 1)&&(verticales[4]==0))
                            {
                                verticales[4]=1;
                                pasar=1;
                            }
                        }
                         else if(mouse_x>708&&mouse_x<725&&mouse_y>94&&mouse_y<160)
                        {
                            if((mouse_b & 1)&&(verticales[5]==0))
                            {
                                verticales[5]=1;
                                pasar=1;
                            }
                        }
                        //segunda fila
                        if(mouse_x>56&&mouse_x<73&&mouse_y>172&&mouse_y<238)
                        {
                            if((mouse_b & 1)&&(verticales[6]==0))
                            {
                                verticales[6]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>189&&mouse_x<205&&mouse_y>172&&mouse_y<238)
                        {
                            if((mouse_b & 1)&&(verticales[7]==0))
                            {
                                verticales[7]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>317&&mouse_x<334&&mouse_y>172&&mouse_y<238)
                        {
                            if((mouse_b & 1)&&(verticales[8]==0))
                            {
                                verticales[8]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>449&&mouse_x<466&&mouse_y>172&&mouse_y<238)
                        {
                            if((mouse_b & 1)&&(verticales[9]==0))
                            {
                                verticales[9]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>579&&mouse_x<596&&mouse_y>172&&mouse_y<238)
                        {
                            if((mouse_b & 1)&&(verticales[10]==0))
                            {
                                verticales[10]=1;
                                pasar=1;
                            }
                        }
                         else if(mouse_x>708&&mouse_x<725&&mouse_y>172&&mouse_y<238)
                        {
                            if((mouse_b & 1)&&(verticales[11]==0))
                            {
                                verticales[11]=1;
                                pasar=1;
                            }
                        }
                        //tercera fila
                        if(mouse_x>56&&mouse_x<73&&mouse_y>248&&mouse_y<314)
                        {
                            if((mouse_b & 1)&&(verticales[12]==0))
                            {
                                verticales[12]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>189&&mouse_x<205&&mouse_y>248&&mouse_y<314)
                        {
                            if((mouse_b & 1)&&(verticales[13]==0))
                            {
                                verticales[13]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>317&&mouse_x<334&&mouse_y>248&&mouse_y<314)
                        {
                            if((mouse_b & 1)&&(verticales[14]==0))
                            {
                                verticales[14]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>449&&mouse_x<466&&mouse_y>248&&mouse_y<314)
                        {
                            if((mouse_b & 1)&&(verticales[15]==0))
                            {
                                verticales[15]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>579&&mouse_x<596&&mouse_y>248&&mouse_y<314)
                        {
                            if((mouse_b & 1)&&(verticales[16]==0))
                            {
                                verticales[16]=1;
                                pasar=1;
                            }
                        }
                         else if(mouse_x>708&&mouse_x<725&&mouse_y>248&&mouse_y<314)
                        {
                            if((mouse_b & 1)&&(verticales[17]==0))
                            {
                                verticales[17]=1;
                                pasar=1;
                            }
                        }
                        //Cuarta file
                        else if(mouse_x>56&&mouse_x<73&&mouse_y>324&&mouse_y<390)
                        {
                            if((mouse_b & 1)&&(verticales[18]==0))
                            {
                                verticales[18]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>189&&mouse_x<205&&mouse_y>324&&mouse_y<390)
                        {
                            if((mouse_b & 1)&&(verticales[19]==0))
                            {
                                verticales[19]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>317&&mouse_x<334&&mouse_y>324&&mouse_y<390)
                        {
                            if((mouse_b & 1)&&(verticales[20]==0))
                            {
                                verticales[20]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>449&&mouse_x<466&&mouse_y>324&&mouse_y<390)
                        {
                            if((mouse_b & 1)&&(verticales[21]==0))
                            {
                                verticales[21]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>579&&mouse_x<596&&mouse_y>324&&mouse_y<390)
                        {
                            if((mouse_b & 1)&&(verticales[22]==0))
                            {
                                verticales[22]=1;
                                pasar=1;
                            }
                        }
                         else if(mouse_x>708&&mouse_x<725&&mouse_y>324&&mouse_y<390)
                        {
                            if((mouse_b & 1)&&(verticales[23]==0))
                            {
                                verticales[23]=1;
                                pasar=1;
                            }
                        }
                        //Quinta fila
                        else if(mouse_x>56&&mouse_x<73&&mouse_y>400&&mouse_y<466)
                        {
                            if((mouse_b & 1)&&(verticales[24]==0))
                            {
                                verticales[24]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>189&&mouse_x<205&&mouse_y>400&&mouse_y<466)
                        {
                            if((mouse_b & 1)&&(verticales[25]==0))
                            {
                                verticales[25]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>317&&mouse_x<334&&mouse_y>400&&mouse_y<466)
                        {
                            if((mouse_b & 1)&&(verticales[26]==0))
                            {
                                verticales[26]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>449&&mouse_x<466&&mouse_y>400&&mouse_y<466)
                        {
                            if((mouse_b & 1)&&(verticales[27]==0))
                            {
                                verticales[27]=1;
                                pasar=1;
                            }
                        }
                        else if(mouse_x>579&&mouse_x<596&&mouse_y>400&&mouse_y<466)
                        {
                            if((mouse_b & 1)&&(verticales[28]==0))
                            {
                                verticales[28]=1;
                                pasar=1;
                            }
                        }
                         else if(mouse_x>708&&mouse_x<725&&mouse_y>400&&mouse_y<466)
                        {
                            if((mouse_b & 1)&&(verticales[29]==0))
                            {
                                verticales[29]=1;
                                pasar=1;
                            }
                        }
                        //mostrar las barras hrizontales
                        //primea fila
                        if(horizontales[0]==1)
                            blit(horizontal,buffer,0,0,73,80,118,17);
                        if(horizontales[1]==1)
                            blit(horizontal,buffer,0,0,202,80,118,17);
                        if(horizontales[2]==1)
                            blit(horizontal,buffer,0,0,333,80,118,17);
                        if(horizontales[3]==1)
                            blit(horizontal,buffer,0,0,463,80,118,17);
                        if(horizontales[4]==1)
                            blit(horizontal,buffer,0,0,592,80,118,17);
                        //Segunda fila
                        if(horizontales[5]==1)
                            blit(horizontal,buffer,0,0,73,157,118,17);
                        if(horizontales[6]==1)
                            blit(horizontal,buffer,0,0,202,157,118,17);
                        if(horizontales[7]==1)
                            blit(horizontal,buffer,0,0,333,157,118,17);
                        if(horizontales[8]==1)
                            blit(horizontal,buffer,0,0,463,157,118,17);
                        if(horizontales[9]==1)
                            blit(horizontal,buffer,0,0,592,157,118,17);
                            //tercer fila
                        if(horizontales[10]==1)
                            blit(horizontal,buffer,0,0,73,234,118,17);
                        if(horizontales[11]==1)
                            blit(horizontal,buffer,0,0,202,234,118,17);
                        if(horizontales[12]==1)
                            blit(horizontal,buffer,0,0,333,234,118,17);
                        if(horizontales[13]==1)
                            blit(horizontal,buffer,0,0,463,234,118,17);
                        if(horizontales[14]==1)
                            blit(horizontal,buffer,0,0,592,234,118,17);
                            //cuarta fila
                        if(horizontales[15]==1)
                            blit(horizontal,buffer,0,0,73,311,118,17);
                        if(horizontales[16]==1)
                            blit(horizontal,buffer,0,0,202,311,118,17);
                        if(horizontales[17]==1)
                            blit(horizontal,buffer,0,0,333,311,118,17);
                        if(horizontales[18]==1)
                            blit(horizontal,buffer,0,0,463,311,118,17);
                        if(horizontales[19]==1)
                            blit(horizontal,buffer,0,0,592,311,118,17);
                            //quinta fila
                         if(horizontales[20]==1)
                            blit(horizontal,buffer,0,0,73,388,118,17);
                        if(horizontales[21]==1)
                            blit(horizontal,buffer,0,0,202,388,118,17);
                        if(horizontales[22]==1)
                            blit(horizontal,buffer,0,0,333,388,118,17);
                        if(horizontales[23]==1)
                            blit(horizontal,buffer,0,0,463,388,118,17);
                        if(horizontales[24]==1)
                            blit(horizontal,buffer,0,0,592,388,118,17);
                            //sexta fila
                         if(horizontales[25]==1)
                            blit(horizontal,buffer,0,0,73,465,118,17);
                        if(horizontales[26]==1)
                            blit(horizontal,buffer,0,0,202,465,118,17);
                        if(horizontales[27]==1)
                            blit(horizontal,buffer,0,0,333,465,118,17);
                        if(horizontales[28]==1)
                            blit(horizontal,buffer,0,0,463,465,118,17);
                        if(horizontales[29]==1)
                            blit(horizontal,buffer,0,0,592,465,118,17);
                        //mostrando barras vetricales
                        //primera fila
                        if(verticales[0]==1)
                            blit(vertical,buffer,0,0,56,94,17,66);
                        if(verticales[1]==1)
                            blit(vertical,buffer,0,0,189,94,17,66);
                        if(verticales[2]==1)
                            blit(vertical,buffer,0,0,318,94,17,66);
                        if(verticales[3]==1)
                            blit(vertical,buffer,0,0,450,94,17,66);
                        if(verticales[4]==1)
                            blit(vertical,buffer,0,0,579,94,17,66);
                        if(verticales[5]==1)
                            blit(vertical,buffer,0,0,709,94,17,66);
                            //segunda fila
                        if(verticales[6]==1)
                            blit(vertical,buffer,0,0,56,172,17,66);
                        if(verticales[7]==1)
                            blit(vertical,buffer,0,0,189,172,17,66);
                        if(verticales[8]==1)
                            blit(vertical,buffer,0,0,318,172,17,66);
                        if(verticales[9]==1)
                            blit(vertical,buffer,0,0,450,172,17,66);
                        if(verticales[10]==1)
                            blit(vertical,buffer,0,0,579,172,17,66);
                        if(verticales[11]==1)
                            blit(vertical,buffer,0,0,709,172,17,66);
                            //tercer fila
                        if(verticales[12]==1)
                            blit(vertical,buffer,0,0,56,248,17,66);
                        if(verticales[13]==1)
                            blit(vertical,buffer,0,0,189,248,17,66);
                        if(verticales[14]==1)
                            blit(vertical,buffer,0,0,318,248,17,66);
                        if(verticales[15]==1)
                            blit(vertical,buffer,0,0,450,248,17,66);
                        if(verticales[16]==1)
                            blit(vertical,buffer,0,0,579,248,17,66);
                        if(verticales[17]==1)
                            blit(vertical,buffer,0,0,709,248,17,66);
                        //Cuarta file
                        if(verticales[18]==1)
                            blit(vertical,buffer,0,0,56,324,17,66);
                        if(verticales[19]==1)
                            blit(vertical,buffer,0,0,189,324,17,66);
                        if(verticales[20]==1)
                            blit(vertical,buffer,0,0,318,324,17,66);
                        if(verticales[21]==1)
                            blit(vertical,buffer,0,0,450,324,17,66);
                        if(verticales[22]==1)
                            blit(vertical,buffer,0,0,579,324,17,66);
                        if(verticales[23]==1)
                            blit(vertical,buffer,0,0,709,324,17,66);
                        //Quinta fila
                        if(verticales[24]==1)
                            blit(vertical,buffer,0,0,56,400,17,66);
                        if(verticales[25]==1)
                            blit(vertical,buffer,0,0,189,400,17,66);
                        if(verticales[26]==1)
                            blit(vertical,buffer,0,0,318,400,17,66);
                        if(verticales[27]==1)
                            blit(vertical,buffer,0,0,450,400,17,66);
                        if(verticales[28]==1)
                            blit(vertical,buffer,0,0,579,400,17,66);
                        if(verticales[29]==1)
                            blit(vertical,buffer,0,0,709,400,17,66);
                        //verificacion de cuadros
                        if((horizontales[0]==1)&&(horizontales[5]==1)&&(verticales[0]==1)&&(verticales[1]==1))
                        {
                            if(cuadros[0]==0)
                            {
                                cuadros[0]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[0]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[0]=2;
                                }
                            }
                            if(figura[0]==1)
                                blit(jug1,buffer,0,0,72,92,116,62);
                            else if(figura[0]==2)
                               blit(jug2,buffer,0,0,72,92,116,62);
                        }
                        if((horizontales[1]==1)&&(horizontales[6]==1)&&(verticales[1]==1)&&(verticales[2]==1))
                        {
                            if(cuadros[1]==0)
                            {
                                cuadros[1]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[1]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[1]=2;
                                }
                            }
                            if(figura[1]==1)
                                blit(jug1,buffer,0,0,204,92,116,62);
                            else if(figura[1]==2)
                                blit(jug2,buffer,0,0,204,92,116,62);
                        }
                        if((horizontales[2]==1)&&(horizontales[7]==1)&&(verticales[2]==1)&&(verticales[3]==1))
                        {
                            if(cuadros[2]==0)
                            {
                                cuadros[2]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[2]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[2]=2;
                                }
                            }
                            if(figura[2]==1)
                                blit(jug1,buffer,0,0,334,92,116,62);
                            else if(figura[2]==2)
                                blit(jug2,buffer,0,0,334,92,116,62);
                        }
                        if((horizontales[3]==1)&&(horizontales[8]==1)&&(verticales[3]==1)&&(verticales[4]==1))
                        {
                            if(cuadros[3]==0)
                            {
                                cuadros[3]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[3]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[3]=2;
                                }
                            }
                            if(figura[3]==1)
                                blit(jug1,buffer,0,0,463,92,116,62);
                            else if(figura[3]==2)
                                blit(jug2,buffer,0,0,463,92,116,62);
                        }
                        if((horizontales[4]==1)&&(horizontales[9]==1)&&(verticales[4]==1)&&(verticales[5]==1))
                        {
                            if(cuadros[4]==0)
                            {
                                cuadros[4]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[4]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[4]=2;
                                }
                            }
                            if(figura[4]==1)
                                blit(jug1,buffer,0,0,594,92,116,62);
                            else if(figura[4]==2)
                                blit(jug2,buffer,0,0,594,92,116,62);
                        }
                        if((horizontales[5]==1)&&(horizontales[10]==1)&&(verticales[6]==1)&&(verticales[7]==1))
                        {
                            if(cuadros[5]==0)
                            {
                                cuadros[5]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[5]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[5]=2;
                                }
                            }
                            if(figura[5]==1)
                                blit(jug1,buffer,0,0,72,173,116,62);
                            else if(figura[5]==2)
                                blit(jug2,buffer,0,0,72,173,116,62);
                        }
                        if((horizontales[6]==1)&&(horizontales[11]==1)&&(verticales[7]==1)&&(verticales[8]==1))
                        {
                            if(cuadros[6]==0)
                            {
                                cuadros[6]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[6]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[6]=2;
                                }
                            }
                            if(figura[6]==1)
                                blit(jug1,buffer,0,0,203,173,116,62);
                            else if(figura[6]==2)
                                blit(jug2,buffer,0,0,203,173,116,62);
                        }
                        if((horizontales[7]==1)&&(horizontales[12]==1)&&(verticales[8]==1)&&(verticales[9]==1))
                        {
                            if(cuadros[7]==0)
                            {
                                cuadros[7]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[7]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[7]=2;
                                }
                            }
                            if(figura[7]==1)
                                blit(jug1,buffer,0,0,333,173,116,62);
                            else if(figura[7]==2)
                                blit(jug2,buffer,0,0,333,173,116,62);
                        }
                        if((horizontales[8]==1)&&(horizontales[13]==1)&&(verticales[9]==1)&&(verticales[10]==1))
                        {
                            if(cuadros[8]==0)
                            {
                                cuadros[8]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[8]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[8]=2;
                                }
                            }
                            if(figura[8]==1)
                                blit(jug1,buffer,0,0,462,173,116,62);
                            else if(figura[8]==2)
                                blit(jug2,buffer,0,0,462,173,116,62);
                        }
                        if((horizontales[9]==1)&&(horizontales[14]==1)&&(verticales[10]==1)&&(verticales[11]==1))
                        {
                            if(cuadros[9]==0)
                            {
                                cuadros[9]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[9]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[9]=2;
                                }
                            }
                            if(figura[9]==1)
                                blit(jug1,buffer,0,0,591,173,116,62);
                            else if(figura[9]==2)
                                blit(jug2,buffer,0,0,591,173,116,62);
                        }
                        if((horizontales[10]==1)&&(horizontales[15]==1)&&(verticales[12]==1)&&(verticales[13]==1))
                        {
                            if(cuadros[10]==0)
                            {
                                cuadros[10]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[10]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[10]=2;
                                }
                            }
                            if(figura[10]==1)
                                blit(jug1,buffer,0,0,72,250,116,62);
                            else if(figura[10]==2)
                                blit(jug2,buffer,0,0,72,250,116,62);
                        }
                        if((horizontales[11]==1)&&(horizontales[16]==1)&&(verticales[13]==1)&&(verticales[14]==1))
                        {
                            if(cuadros[11]==0)
                            {
                                cuadros[11]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[11]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[11]=2;
                                }
                            }
                            if(figura[11]==1)
                                blit(jug1,buffer,0,0,203,250,116,62);
                            else if(figura[11]==2)
                                blit(jug2,buffer,0,0,203,250,116,62);
                        }
                        if((horizontales[12]==1)&&(horizontales[17]==1)&&(verticales[14]==1)&&(verticales[15]==1))
                        {
                            if(cuadros[12]==0)
                            {
                                cuadros[12]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[12]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[12]=2;
                                }
                            }
                            if(figura[12]==1)
                                blit(jug1,buffer,0,0,333,250,116,62);
                            else if(figura[12]==2)
                                blit(jug2,buffer,0,0,333,250,116,62);
                        }
                        if((horizontales[13]==1)&&(horizontales[18]==1)&&(verticales[15]==1)&&(verticales[16]==1))
                        {
                            if(cuadros[13]==0)
                            {
                                cuadros[13]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[13]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[13]=2;
                                }
                            }
                            if(figura[13]==1)
                                blit(jug1,buffer,0,0,462,250,116,62);
                            else if(figura[13]==2)
                                blit(jug2,buffer,0,0,462,250,116,62);
                        }
                        if((horizontales[14]==1)&&(horizontales[19]==1)&&(verticales[16]==1)&&(verticales[17]==1))
                        {
                            if(cuadros[14]==0)
                            {
                                cuadros[14]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[14]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[14]=2;
                                }
                            }
                            if(figura[14]==1)
                                blit(jug1,buffer,0,0,591,250,116,62);
                            else if(figura[14]==2)
                                blit(jug2,buffer,0,0,591,250,116,62);
                        }
                        if((horizontales[15]==1)&&(horizontales[20]==1)&&(verticales[18]==1)&&(verticales[19]==1))
                        {
                            if(cuadros[15]==0)
                            {
                                cuadros[15]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[15]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[15]=2;
                                }
                            }
                            if(figura[15]==1)
                                blit(jug1,buffer,0,0,72,326,116,62);
                            else if(figura[15]==2)
                                blit(jug2,buffer,0,0,72,326,116,62);
                        }
                        if((horizontales[16]==1)&&(horizontales[21]==1)&&(verticales[19]==1)&&(verticales[20]==1))
                        {
                            if(cuadros[16]==0)
                            {
                                cuadros[16]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[16]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[16]=2;
                                }
                            }
                            if(figura[16]==1)
                                blit(jug1,buffer,0,0,202,326,116,62);
                            else if(figura[16]==2)
                                blit(jug2,buffer,0,0,202,326,116,62);
                        }
                        if((horizontales[17]==1)&&(horizontales[22]==1)&&(verticales[20]==1)&&(verticales[21]==1))
                        {
                            if(cuadros[17]==0)
                            {
                                cuadros[17]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[17]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[17]=2;
                                }
                            }
                            if(figura[17]==1)
                                blit(jug1,buffer,0,0,333,326,116,62);
                            else if(figura[17]==2)
                                blit(jug2,buffer,0,0,333,326,116,62);
                        }
                        if((horizontales[18]==1)&&(horizontales[23]==1)&&(verticales[21]==1)&&(verticales[22]==1))
                        {
                            if(cuadros[18]==0)
                            {
                                cuadros[18]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[18]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[18]=2;
                                }
                            }
                            if(figura[18]==1)
                                blit(jug1,buffer,0,0,463,326,116,62);
                            else if(figura[18]==2)
                                blit(jug2,buffer,0,0,463,326,116,62);
                        }
                        if((horizontales[19]==1)&&(horizontales[24]==1)&&(verticales[22]==1)&&(verticales[23]==1))
                        {
                            if(cuadros[19]==0)
                            {
                                cuadros[19]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[19]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[19]=2;
                                }
                            }
                            if(figura[19]==1)
                                blit(jug1,buffer,0,0,593,326,116,62);
                            else if(figura[19]==2)
                                blit(jug2,buffer,0,0,593,326,116,62);
                        }
                        if((horizontales[20]==1)&&(horizontales[25]==1)&&(verticales[24]==1)&&(verticales[25]==1))
                        {
                            if(cuadros[20]==0)
                            {
                                cuadros[20]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[20]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[20]=2;
                                }
                            }
                            if(figura[20]==1)
                                blit(jug1,buffer,0,0,72,401,116,62);
                            else if(figura[20]==2)
                                blit(jug2,buffer,0,0,72,401,116,62);
                        }
                        if((horizontales[21]==1)&&(horizontales[26]==1)&&(verticales[25]==1)&&(verticales[26]==1))
                        {
                            if(cuadros[21]==0)
                            {
                                cuadros[21]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[21]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[21]=2;
                                }
                            }
                            if(figura[21]==1)
                                blit(jug1,buffer,0,0,202,401,116,62);
                            else if(figura[21]==2)
                                blit(jug2,buffer,0,0,202,401,116,62);
                        }
                        if((horizontales[22]==1)&&(horizontales[27]==1)&&(verticales[26]==1)&&(verticales[27]==1))
                        {
                            if(cuadros[22]==0)
                            {
                                cuadros[22]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[22]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[22]=2;
                                }
                            }
                            if(figura[22]==1)
                                blit(jug1,buffer,0,0,333,401,116,62);
                            else if(figura[22]==2)
                                blit(jug2,buffer,0,0,333,401,116,62);
                        }
                        if((horizontales[23]==1)&&(horizontales[28]==1)&&(verticales[27]==1)&&(verticales[28]==1))
                        {
                            if(cuadros[23]==0)
                            {
                                cuadros[23]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[23]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[23]=2;
                                }
                            }
                            if(figura[23]==1)
                                blit(jug1,buffer,0,0,463,401,116,62);
                            else if(figura[23]==2)
                                blit(jug2,buffer,0,0,463,401,116,62);
                        }
                        if((horizontales[24]==1)&&(horizontales[29]==1)&&(verticales[28]==1)&&(verticales[29]==1))
                        {
                            if(cuadros[24]==0)
                            {
                                cuadros[24]=1;
                                pasar=0;
                                if(empieza==0)
                                {
                                    cont1++;
                                    figura[24]=1;
                                }
                                else if(empieza==1)
                                {
                                    cont2++;
                                    figura[24]=2;
                                }
                            }
                            if(figura[24]==1)
                                blit(jug1,buffer,0,0,592,401,116,62);
                            else if(figura[24]==2)
                                blit(jug2,buffer,0,0,592,401,116,62);
                        }
                        if(cont1==1)
                            blit(n1,buffer,0,0,229,24,66,43);
                        else if(cont1==2)
                            blit(n2,buffer,0,0,229,24,66,43);
                        else if(cont1==3)
                            blit(n3,buffer,0,0,229,24,66,43);
                        else if(cont1==4)
                            blit(n4,buffer,0,0,229,24,66,43);
                        else if(cont1==5)
                            blit(n5,buffer,0,0,229,24,66,43);
                        else if(cont1==6)
                            blit(n6,buffer,0,0,229,24,66,43);
                        else if(cont1==7)
                            blit(n7,buffer,0,0,229,24,66,43);
                        else if(cont1==8)
                            blit(n8,buffer,0,0,229,24,66,43);
                        else if(cont1==9)
                            blit(n9,buffer,0,0,229,24,66,43);
                        else if(cont1==10)
                            blit(n10,buffer,0,0,229,24,66,43);
                        else if(cont1==11)
                            blit(n11,buffer,0,0,229,24,66,43);
                        else if(cont1==12)
                            blit(n12,buffer,0,0,229,24,66,43);
                        else if(cont1==13)
                            blit(n13,buffer,0,0,229,24,66,43);
                        else if(cont1==14)
                            blit(n14,buffer,0,0,229,24,66,43);
                        else if(cont1==15)
                            blit(n15,buffer,0,0,229,24,66,43);
                        else if(cont1==16)
                            blit(n16,buffer,0,0,229,24,66,43);
                        else if(cont1==17)
                            blit(n17,buffer,0,0,229,24,66,43);
                        else if(cont1==18)
                            blit(n18,buffer,0,0,229,24,66,43);
                        else if(cont1==19)
                            blit(n19,buffer,0,0,229,24,66,43);
                        else if(cont1==20)
                            blit(n20,buffer,0,0,229,24,66,43);
                        else if(cont1==21)
                            blit(n21,buffer,0,0,229,24,66,43);
                        else if(cont1==22)
                            blit(n22,buffer,0,0,229,24,66,43);
                        else if(cont1==23)
                            blit(n23,buffer,0,0,229,24,66,43);
                        else if(cont1==24)
                            blit(n24,buffer,0,0,229,24,66,43);
                        if(cont2==1)
                            blit(n1,buffer,0,0,624,24,66,43);
                        else if(cont2==2)
                            blit(n2,buffer,0,0,624,24,66,43);
                        else if(cont2==3)
                            blit(n3,buffer,0,0,624,24,66,43);
                        else if(cont2==4)
                            blit(n4,buffer,0,0,624,24,66,43);
                        else if(cont2==5)
                            blit(n5,buffer,0,0,624,24,66,43);
                        else if(cont2==6)
                            blit(n6,buffer,0,0,624,24,66,43);
                        else if(cont2==7)
                            blit(n7,buffer,0,0,624,24,66,43);
                        else if(cont2==8)
                            blit(n8,buffer,0,0,624,24,66,43);
                        else if(cont2==9)
                            blit(n9,buffer,0,0,624,24,66,43);
                        else if(cont2==10)
                            blit(n10,buffer,0,0,624,24,66,43);
                        else if(cont2==11)
                            blit(n11,buffer,0,0,624,24,66,43);
                        else if(cont2==12)
                            blit(n12,buffer,0,0,624,24,66,43);
                        else if(cont2==13)
                            blit(n13,buffer,0,0,624,24,66,43);
                        else if(cont2==14)
                            blit(n14,buffer,0,0,624,24,66,43);
                        else if(cont2==15)
                            blit(n15,buffer,0,0,624,24,66,43);
                        else if(cont2==16)
                            blit(n16,buffer,0,0,624,24,66,43);
                        else if(cont2==17)
                            blit(n17,buffer,0,0,624,24,66,43);
                        else if(cont2==18)
                            blit(n18,buffer,0,0,624,24,66,43);
                        else if(cont2==19)
                            blit(n19,buffer,0,0,624,24,66,43);
                        else if(cont2==20)
                            blit(n20,buffer,0,0,624,24,66,43);
                        else if(cont2==21)
                            blit(n21,buffer,0,0,624,24,66,43);
                        else if(cont2==22)
                            blit(n22,buffer,0,0,624,24,66,43);
                        else if(cont2==23)
                            blit(n23,buffer,0,0,624,24,66,43);
                        else if(cont2==24)
                            blit(n24,buffer,0,0,624,24,66,43);
                        masked_blit(cursor,buffer,0,0,mouse_x,mouse_y,30,30);
                        blit(buffer,screen,0,0,0,0,800,530);


                        if((cont1+cont2)==25)
                        {

                            aux=ganador(cont1,cont2);
                            while(victoria)
                            {
                                if(aux==1)
                                {
                                    blit(vic1,buffer,0,0,0,0,800,530);
                                }
                                else if(aux==2)
                                {
                                    blit(vic2,buffer,0,0,0,0,800,530);
                                }
                                if(mouse_x>32&&mouse_x<137&&mouse_y>39&&mouse_y<109)
                                {

                                    if(mouse_b & 1)
                                    {
                                        victoria=false;
                                        jugar=false;
                                        pasar=1;
                                    }
                                }
                                masked_blit(cursor,buffer,0,0,mouse_x,mouse_y,30,30);
                                blit(buffer,screen,0,0,0,0,800,530);
                            }
                        }
                    }

                    if (empieza==0){
                        empieza=1;
                    }else if (empieza==1){
                        empieza=0;
                    }
                    masked_blit(cursor,buffer,0,0,mouse_x,mouse_y,30,30);
                    blit(buffer,screen,0,0,0,0,800,530);
                }

            }

        }
        else if(mouse_x>305&&mouse_x<528&&mouse_y>343&&mouse_y<413)
        {
            blit(menu2,buffer,0,0,0,0,800,530);
            if(mouse_b & 1)
            {
                instrucciones=true;
                while(instrucciones)
                {
                    if(mouse_x>79&&mouse_x<350&&mouse_y>448&&mouse_y<512)
                    {
                        blit(instructivo1,buffer,0,0,0,0,800,530);
                        if(mouse_b & 1)
                        {
                            instrucciones=false;
                        }
                    }
                    else if(mouse_x>443&&mouse_x<708&&mouse_y>451&&mouse_y<515)
                    {
                         blit(instructivo2,buffer,0,0,0,0,800,530);
                        rest(10);
                         if(mouse_b & 1)
                        {
                            instrucciones=false;
                            salir=true;
                        }
                    }
                    else
                    {
                        blit(instructivo,buffer,0,0,0,0,800,530);
                    }
                     masked_blit(cursor,buffer,0,0,mouse_x,mouse_y,30,30);
                    blit(buffer,screen,0,0,0,0,800,530);
                }
            }
        }
        else if(mouse_x>151&&mouse_x<406&&mouse_y>423&&mouse_y<506)
        {
            blit(menu3,buffer,0,0,0,0,800,530);
            if(mouse_b & 1)
                salir=true;
                rest(10);
        }
        else
        {
            blit(menu,buffer,0,0,0,0,800,530);
        }
        masked_blit(cursor,buffer,0,0,mouse_x,mouse_y,30,30);
        blit(buffer,screen,0,0,0,0,800,530);
    }
    destroy_bitmap(buffer);
    return 0;

}
END_OF_MAIN ()

int comenzar()
{
    srand(time(NULL));

    int com=rand()%2;
    return com;
}
int ganador(int cont1,int cont2)
{
    if(cont1>cont2)
    {
       return 1;
    }
    else
    {

        return 2;
    }
}
void cronometro()
{
    if(mili>100)
    {
        segundos++;
        mili=0;
        if(segundos>59)
        {
            minutos++;
            segundos=0;
        }
    }
}


