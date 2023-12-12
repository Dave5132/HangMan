#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>


using namespace std;

const char words[][10] = {
    "cat",
    "dog",
    "sun",
    "moon",
    "tree",
    "house",
    "book",
    "chair",
    "apple",
    "river"
};
const char mediumWords[][15] = {
    "elephant",
    "computer",
    "giraffe",
    "universe",
    "eleven",
    "mountain",
    "keyboard",
    "eleven",
    "journey",
    "happiness"
};
const char hardWords[][40] = {
    "xylophone",
    "juxtaposition",
    "labyrinthine",
    "quizzical",
    "vexatious",
    "exacerbate",
    "mnemonic",
    "pseudopseudohypoparathyroidism",
    "onomatopoeia",
    "sesquipedalian"
};

int level=0;
void grafica(int n){
    switch(n){
        case 1:
            line(100, 100, 100, 500);
            line(100, 100, 300, 100);
            line(300, 120, 300, 100);
            break;
        case 2:
            circle(300, 160, 40);
            break;
        case 3:
            line(300, 200, 300, 300);
            break;
        case 4:
            line(300, 300, 250, 350);
            line(300, 300, 350, 350);
            break;
        case 5:
            line(300, 200, 250, 225);
            line(300, 200, 350, 225);
            break;
        case 6:
            line(305, 140, 325, 160);
            line(305, 160, 325, 140);
            line(275, 140, 295, 160);
            line(275, 160, 295, 140);
            line(290, 180, 310, 180);
            break;
    }
}

void joaca(const char * s,char space[1000], int incercari ){
    
    for (int i = 0; i < strlen(s); i++) {
        space[i] = '_';
    }
    
    space[strlen(s)] = '\0';
        char litera;
       while (incercari>0){
        cin>>litera;
        int b=1;
         system("clear");
        for (int i = 0; i < strlen(s); i++) {
            if(litera==s[i]){
                space[i] =litera;
                b=0;
            }
        }
        if (b==1){ 
            incercari--;
            grafica(6-incercari);
        }
        if(strcmp(space, s)==0){
            cout<<"Felicitari ai ghicit cavantul treci la urmatorul Cuvant"<<endl;
            level++;
            break;
        }
        cout<<"Cuvantul: "<<space<<endl<<"Incercari: "<<incercari<<endl;
    }
    
}


int main(){
   
int gd=DETECT,gm;
         
    //Level 1
    initgraph(&gd,&gm,(char*)"");
    srand(time(NULL));
    int a = rand() % 10;
    const char* s = words[a];
    char space[1000];
    cout<<"Cuvantul care trebuie ghicit: "<<s<<endl;
    joaca(s,space,6);
    closegraph();

for(int i=0;i<5;i++){
    switch(level){ return 0;
    //Level 2
        case 1:
            initgraph(&gd,&gm,(char*)"");
            srand(time(NULL));
            a = rand() % 10;
            s = mediumWords[a];
            cout<<"Cuvantul care trebuie ghicit: "<<s<<endl<<space;
            joaca(s,space,6);
            closegraph();
        break;
    //Level 3
        case 2:
            initgraph(&gd,&gm,(char*)"");
            srand(time(NULL));
            a = rand() % 10;
            s = hardWords[a];
            cout<<"Cuvantul care trebuie ghicit: "<<s<<endl<<space;
            joaca(s,space,6);
            closegraph();
        break;
    //Level 4
        case 3:
            initgraph(&gd,&gm,(char*)"");
            srand(time(NULL));
            a = rand() % 10;
            s = hardWords[a];
            cout<<"Cuvantul care trebuie ghicit: "<<s<<endl<<space;
            joaca(s,space,3);
            closegraph();
        break;
    }
}
 return 0;
}