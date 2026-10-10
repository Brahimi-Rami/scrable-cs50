#include <stdio.h>
#include <cs50.h>
int main(void){
    string arr[] = {"aeilnorstu", "dg" ,"bcmp" ,"fhgvwy" ,"k" ,"jx" ,"qz"};
    int i=0;
    int j=0;
    int k=0;
    int l=0;
    int m=0;
    int p=0;
    int q=0;
    int score1 =0;
    int score2 =0;
    string word1;
    string word2;
    int result=1;
    bool role = true;
    word2=get_string("player2");
    while (result ==1)
    {

        if (role ==true){
            word1=get_string("player 1");
            role = false;
        }

        else
        {
            word2=get_string("player2");
            role=true;
        }

        result=0;
        while(word1[i]!='\0' && result==0)
        {


            while(word2[j]!='\0' && result==0)
            {


                if(word1[i]==word2[j])
                {

                    result = 1;


                }

                j++;

            }

            i++;
            j=0;
        }
        i=0;





        while(word1[p]!='\0' )
        {



            while (k<7 && m==0 && role==true)
            {

                while(arr[k][l]!='\0' && m==0 ){
                    if(arr[k][l]==word1[p] ){
                        m=1;
                        if(k==5){

                            score1=score1 + 8;
                        }
                        else if(k==6){

                            score1= score1 +10;
                        }
                        else
                        {

                            score1=score1 + k +1;
                        }
                    }
                    l++;
                }
                k++;
                l=0;
            }
            m=0;
            k=0;

            p++;
            q=0;
        }
        p=0;

        
        while(word2[q]!='\0' )
            {



                while (k<7 && m==0 && role==false)
                {

                    while(arr[k][l]!='\0' && m==0 ){
                        if(arr[k][l]==word2[q] ){

                            m=1;
                            if(k==5){

                                score2=score2 + 8;
                            }
                            else if(k==6){

                                score2= score2 +10;
                            }
                            else
                            {

                                score2=score2 + k +1;
                            }
                        }
                        l++;

                    }
                    k++;
                    l=0;
                }
                m=0;
                k=0;

                q++;

            }







   }
    printf("%i\n", score1);
    printf("%i\n", score2);
}