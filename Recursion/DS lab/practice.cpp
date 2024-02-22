 main() {
    string value[9]={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=0;i<10;i++)
    {
        int n;cin>>n;
        if(n<=9){
            cout<<value[i]<<endl;
        }
        if(n%2==0)
        {
            cout<<"even"<<endl;  
        }
        else
        {
            cout<<"odd"<<endl;
        }
    }
    return 0;
}
