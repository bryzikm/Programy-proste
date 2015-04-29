/*
 program ma w zadanym pliku tekstowym znajdowaæ wszystkie znaczniki html, policzyæ czêstoœæ ich wystêpowania i wyniki zapisaæ w innym pliku tekstowym.

*/

using namespace std;

int main(){
    FILE *plik;
    int i,j,k = 0;
    char linijka[100];
    int liczba = 0;
    
    plik = fopen("plik.txt","r");
    
    while(fgets(linijka,sizeof(linijka),plik)){ 
                       for(i = 0; i < strlen(linijka); i++)
                             if(linijka[i] == '<'){
                                           string tag;
                                           for(j = i+1; j < strlen(linijka); j++){
                                                 if((((tag += linijka[j]) == "html") || (tag == "body") || (tag == "font") || (tag == "title")) && (linijka[j+1] == '>')){
                                                          liczba++;
                                                          break;
                                                          }
                                                               }
                                                 }else{
                                                       }
                                           }
cout << "Liczba tagow html = " << liczba << endl;
system("pause");
}