#include <QCoreApplication>
#include <string>
#include <iostream>

using namespace std;

void limpiar(){
    cout << "\n" << endl;
    cout << "\n" << endl;
    cout << "\n" << endl;
    cout << "\n" << endl;
    cout << "\n" << endl;
    cout << "\n" << endl;
    cout << "\n" << endl;

}

void logo(){
    cout << "                            ,-.                               " << endl;
    cout << "       ___,---.__          /'|`\\          __,---,___          " << endl;
    cout << "    ,-'    \\`    `-.____,-'  |  `-.____,-'    //    `-.       " << endl;
    cout << "  ,'        |           ~'\\     /`~           |        `.      " << endl;
    cout << " /      ___//              `. ,'          ,  , \\___      \\    " << endl;
    cout << " /      ___//              `. ,'          ,  , \\___      \\    " << endl;
    cout << "|   /          /\\_  `   .    |    ,      _/\\          \\   |   " << endl;
    cout << "\\  |           \\ \\`-.___ \\   |   / ___,-'/ /           |  /  " << endl;
    cout << " \\  \\           | `._   `\\  |  //'   _,' |           /  /      " << endl;
    cout << "  `-.\\         /'  _ `---'' , . ``---' _  `\\         /,-'     " << endl;
    cout << "     ``       /     \\    ,='/ \\`=.    /     \\       ''          " << endl;
    cout << "             |__   /|\\_,--.,-.--,--._/|\\   __|                  " << endl;
    cout << "             /  `./  \\`\\ |  |  | /,//' \\,'  \\                  " << endl;
    cout << "            /   /     ||--+--|--+-/-|     \\   \\                 " << endl;
    cout << "           |   |     /'\\_\\_\\ | /_/_/`\\     |   |                " << endl;
    cout << "            \\   \\__, \\_     `~'     _/ .__/   /" << endl;
    cout << "             `-._,-'   `-._______,-'   `-._,-'" << endl;

}

int main(int argc, char *argv[])
{
 QCoreApplication a(argc, argv);
 string nombre;
 int contador = 0;
 while(nombre != "Juan Carlos"){
        cout << "Quien eres? " << endl;
        char comando [200];
        cin.getline(comando,20);
        string nombre = comando;

   if(nombre == "Juan Carlos"){
     system("cls");
     logo();
     cout << "         Hola Juan Carlos como estas chupapijas :v" << endl;
     break;
   }else{
     system("cls");
     switch(contador){
       case 0:cout << "No te entiendo nada \n" << endl;
              break;
       case 1:cout << "Porque aca esta el espiritu \n" << endl;
              break;

      }
      contador++;
    }
    nombre = "";

 }
 return a.exec();
}
