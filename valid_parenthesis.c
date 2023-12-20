struct stack{
    char *arr;
    int top;


};

bool isValid(char* s) {
    int len=strlen(s);
    struct stack s1;
   s1.arr=malloc(len);
   s1.top=-1;
   for(int i=0;i<len;i++){
       if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            s1.top++;
           s1.arr[s1.top]=s[i];
          
       }
       else{
           if(s[i]==')'){
               if(s1.top==-1 || s1.arr[s1.top]!='('){
                   return 0;
               }
               s1.top--;
           }
           else if(s[i]==']'){
               if(s1.top==-1 || s1.arr[s1.top]!='['){
                   return 0;
               }
               s1.top--;
           }
           else{
               if(s1.top==-1 || s1.arr[s1.top]!='{'){
                   return 0;
               }
               s1.top--;
           }
       }
       
   }
   return s1.top==-1;
    
}