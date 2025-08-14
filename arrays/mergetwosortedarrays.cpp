#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


void sortArray(vector<int>&v){
    for(int i=0;i<v.size()-1;i++){
        for(int j=0;j<v.size()-1-i;j++){
            if(v[j]>v[j+1]){
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
}

vector<int>merge(vector<int>&v,vector<int>&w){
    int i=0,j=0,k=0;
    int n=v.size()+w.size();
    vector<int>m(n);

    while(i<v.size() && j<w.size()){
        if(v[i]<w[j]){
            m[k]=v[i];
            i++;
        }else{
            m[k]=w[j];
            j++;
        }
        k++;
    }

    while(i<v.size()){
        m[k]=v[i];
        i++;
        k++;
    }

    while(j<w.size()){
        m[k]=w[j];
        j++;
        k++;
    }

    return m;
}

int main(){
    vector<int>v,w;
    int n1,n2,x;

    cout<<"Enter Size of the first Array: ";
    cin>>n1;
    for(int i=0;i<n1;i++){
        cin>>x;
        v.push_back(x);
    }

    cout<<"Enter Size of the second Array: ";
    cin>>n2;
    for(int i=0;i<n2;i++){
        cin>>x;
        w.push_back(x);
    }

    cout<<"FIRST ARRAY: "<<endl;
    display(v);
    cout<<"SECOND ARRAY: "<<endl;
    display(w);

    
    sortArray(v);
    sortArray(w);

    vector<int>merged=merge(v,w);
    cout<<"MERGED SORTED ARRAY: "<<endl;
    display(merged);

    return 0;
}
