#include <iostream>
#include <string>
using namespace std;

int arr[20]; //Deklarasi variable global dengan panjang 20
int n; //Deklarasi variable global n untuk menyimpan elemn pada arry

void input(){
    int d;
    while (true){
        cout << "Masukan banyaknya elemn pada arry";
        cin >> n;
        if (n <= 20){
            break;
        }
    else{
        cout << "\nArray maksimal 20 elemen. \n";
    }
    }
    cout << endl;
    cout << "====================" <<endl;
    cout << "Masukan elemen array" <<endl;
    cout << "====================" <<endl;

    for (int i=0;i<n;i++){
        cout << "Data ke-" << (i+1) << "=";
        cin >> arr[i];
    }
}

void bubbleSortArray(){
    int pass =1; //step 1
    do {
        for (int j=0;j<=-1-pass;j++){ //step 2
            if (arr[j] > arr[j+1]){ //setep 3
            int temp;
            temp = arr[j];
            arr [j] = arr[j+1];
            arr [j+1] = temp;
            }
        }
        pass = pass + 1; //step 4
    }while (pass<=n-1); //step 5
}

void display(){
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j=0;j<n;j++){
        cout << arr[j];
        if (j<n-1) {
            cout << " --> ";
        }
    }
    
    
}

int main (){
    input();

}