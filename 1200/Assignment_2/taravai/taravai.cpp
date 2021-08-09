#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void show_stud();
void del_same();
void sort_data();
void total_gpa();
void hsc_gpa();
void ssc_gpa();

int n1=5,n2=5,n3=5;
int new_n1,new_n2,new_n3;
float t_gpa[20],h_gpa[20],s_gpa[20];

struct Student{
    int  id;
    char  name[50];
    float total_gpa;
    float hsc_gpa;
    float ssc_gpa;
}s[20];

struct Read{
    char r_id[10];
    char r_name[20];
    char r_tgpa[20];
    char r_hgpa[20];
    char r_sgpa[20];
}r[20];

void show_stud()
{
    int i;
    for(i=0; i<5; i++)
    {
       printf("%s %d\n",r[i].r_id,s[i].id);
       printf("%s %s\n",r[i].r_name,s[i].name);
       printf("%s %.2f\n",r[i].r_tgpa,s[i].total_gpa);
       printf("%s %.2f\n",r[i].r_hgpa,s[i].hsc_gpa);
       printf("%s %.2f\n",r[i].r_sgpa,s[i].ssc_gpa);
    }

}
void del_same() ///removing the same Gpa to find out the distinct Gpa
{

    for(int i=0; i<n1; i++)
    {
       for(int j=i+1; j<n1; j++)
       {
           if(t_gpa[i]==t_gpa[j])
            {
                for(int k=j; k<n1-1; k++)
                {
                   t_gpa[k]=t_gpa[k+1];
                }
                n1--;
                j--;
            }
        }
    }

    for(int i=0; i<n2; i++)
    {
       for(int j=i+1; j<n2; j++)
       {
           if(h_gpa[i]==h_gpa[j])
            {
                for(int k=j; k<n2-1; k++)
                {
                   h_gpa[k]=h_gpa[k+1];
                }
                n2--;
                j--;
            }
        }
    }

      for(int i=0; i<n3; i++)
      {
          for(int j=i+1; j<n3; j++)
          {
              if(s_gpa[i]==s_gpa[j])
              {
                  for(int k=j; k<n3-1; k++)
                  {
                      s_gpa[k]=s_gpa[k+1];
                  }
                  n3--;
                  j--;
              }
          }
      }
new_n1=n1;
new_n2=n2;
new_n3=n3;
}

void sort_data()  ///Using the Bubble sort algorithm to sort all the data
{

    float temp;
        for (int i= 0 ; i< new_n1 - 1 ; i++)
            {
                for (int j = 0 ; j < new_n1 - i- 1; j++)
                    {
                    if (t_gpa[j] < t_gpa[j+1]) 
                        {
                            temp       = t_gpa[j];
                            t_gpa[j]   = t_gpa[j+1];
                            t_gpa[j+1] = temp;
                         }
                    }
            }
        
        for (int i= 0 ; i< new_n3 - 1 ; i++)
            {
                for (int j = 0 ; j < new_n3 - i- 1; j++)
                    {
                    if (s_gpa[j] < s_gpa[j+1]) 
                        {
                            temp       = s_gpa[j];
                            s_gpa[j]   = s_gpa[j+1];
                            s_gpa[j+1] = temp;
                         }
                    }
            }
        
        for (int i= 0 ; i< new_n2 - 1 ; i++)
            {
                for (int j = 0 ; j < new_n2 - i- 1; j++)
                    {
                    if (h_gpa[j] < h_gpa[j+1]) 
                        {
                            temp       = h_gpa[j];
                            h_gpa[j]   = h_gpa[j+1];
                            h_gpa[j+1] = temp;
                         }
                    }
            } 

}

void total_gpa()
{
    FILE *t_gpaF=fopen("total_gpa_analysis.txt","w");

     for(int i=0; i<new_n1; i++)
     {
         fprintf(t_gpaF,"Total Gpa: %.2f\n",t_gpa[i]);
         printf("Total Gpa: %.2f\n",t_gpa[i]);
         fprintf(t_gpaF,"===============\n");
         printf("===============\n");
         for(int j=0; j<5; j++)
         {
            if(t_gpa[i]==s[j].total_gpa)
            {
                fprintf(t_gpaF,"ID: %d Name: %s\n",s[j].id,s[j].name);
                printf("ID: %d Name: %s\n",s[j].id,s[j].name);
            }
         }
             fprintf(t_gpaF,"\n");
             printf("\n");
     }

fclose(t_gpaF);

}
void hsc_gpa()
{
   FILE *h_gpaF=fopen("hsc_gpa_analysis.txt","w");

     for(int i=0; i<new_n2; i++)
     {
         fprintf(h_gpaF,"HSC Gpa: %.2f\n",h_gpa[i]);
         printf("HSC Gpa: %.2f\n",h_gpa[i]);
         fprintf(h_gpaF,"===============\n");
         printf("===============\n");
         for(int j=0; j<5; j++)
         {
            if(h_gpa[i]==s[j].hsc_gpa)
            {
                fprintf(h_gpaF,"ID: %d Name: %s\n",s[j].id,s[j].name);
                printf("ID: %d Name: %s\n",s[j].id,s[j].name);
            }
         }
             fprintf(h_gpaF,"\n");
             printf("\n");
     }

fclose(h_gpaF);

}

void ssc_gpa()
{
   FILE *s_gpaF=fopen("ssc_gpa_analysis.txt","w");

     for(int i=0; i<new_n2; i++)
     {
         fprintf(s_gpaF,"SSC Gpa: %.2f\n",s_gpa[i]);
         printf("SSC Gpa: %.2f\n",s_gpa[i]);

         fprintf(s_gpaF,"===============\n");
         printf("===============\n");

         for(int j=0; j<5; j++)
         {
            if(s_gpa[i]==s[j].ssc_gpa)
            {
                fprintf(s_gpaF,"ID: %d Name: %s\n",s[j].id,s[j].name);
                printf("ID: %d Name: %s\n",s[j].id,s[j].name);
            }

         }
             fprintf(s_gpaF,"\n");
             printf("\n");
     }

fclose(s_gpaF);

}

int main()
{
   FILE *p;

   p =fopen("student_data.txt","r");

   if(p==NULL)
   {
       printf("File can't be opened!!\n");
       _exit(1);
   }
       for(int i=0; i<5; i++)
    {

       fscanf(p,"%s %d",&r[i].r_id,&s[i].id);

       fscanf(p,"%s %s",r[i].r_name,&s[i].name);

       fscanf(p,"%s %f",r[i].r_tgpa,&s[i].total_gpa);
       t_gpa[i]=s[i].total_gpa; //Storing the total Gpa data into an array

       fscanf(p,"%s %f",&r[i].r_hgpa,&s[i].hsc_gpa);
       h_gpa[i]=s[i].hsc_gpa; //Storing the HSC Gpa data into an array

       fscanf(p,"%s %f",&r[i].r_sgpa,&s[i].ssc_gpa);
       s_gpa[i]=s[i].ssc_gpa; //storing the SSC Gpa data into an array
    }

show_stud();
del_same();
sort_data();
total_gpa();
hsc_gpa();
ssc_gpa();
fclose(p);
    return 0;
}