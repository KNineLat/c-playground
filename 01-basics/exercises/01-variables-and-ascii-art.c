#include <stdio.h>

int main(void) {
    char name_initial = 'M';
    int age = 21;
    char favourite_lang = 'C';

    printf(
            ".+i+;I:\n"
            ":=..    t:\n"
           "=;+;:..   ii.\n"
         "+I::;=:;;+t=i;=.\n"
          "+;;;+;i.;;:It++i;             (c) Paul Fawcett 1994\n"
        ";X  t+=+=;;i;=iItt+V\n"
        ":t  =ii+.=.;:=+ii++iIY\n"
        ":R   i=ti+=+;i+i=t=++:+Ii+==\n"
        ":R  .+iii==;;itt=++i=i::=YRBBBMRRVY+;\n"
         ";+    +i+;+;+itiiitii+i+i .=iYVIi+iitI=;=\n"
 "+. ::.X:.;   .:=;+=i=ii++YYIIiiiIt.  ;YI::+:;=iit===;\n"
"I;:. .  :+:YI;R..=;;=i+titIVItIYVYYYXVX=+:.....;;+t=+::=\n"
"+i;.::......:;:=;;;;;=+iii=+=++ii++tttVI===;;;;::;;+;tti=\n"
 "tI+.::::.;::;:=+++i=+;i++ititttItIItt=;=t+==;:;::;:;=+IY=:\n"
  ":=i;::.::::;=:;++=i===;iiittitttttItt=;=;:;;...::;::;.;+ii:;\n"
    ":=+::.;+i+t++itiIIY=RRRXXV+VYi===:::;;:.:.........::;;;:;;;;:;;;;\n"
        ":tYti=;=+;+;=+++=;iIVRRRRVVRXRYYYV=;=::::..........:.:==+i==;;==;;:\n"
          ";Xti;=;+i;+ti++=+tRBBBYBVRYXIVtYY++=..:........:.;;::==;::;.;;;\n"
            "YVi==;++:I;;ii+IRXIYIY=:;i;i;=;;;;;.........;:::;:;=;..:;::\n"
            ":=XI=+iItIiit=:IXRRIItiXiIYiIt;I==:.......:..:....;:........\n"
            ":BWRRV;YRIXY...+YRRVYVR+XIRItitI++=:.....;:.........:....:.::..\n"
           "==+RWBXtIRRV+.+IiYRBYBRRYYIRI;VitI;=;..........:::.::;::::...;;;:.\n"
    );

    printf("Some info about me\n");
    printf("Name initial: %c\n", name_initial);
    printf("Age: %d\n", age);
    printf("Favourite language: %c\n", favourite_lang);

    return 0;
}
