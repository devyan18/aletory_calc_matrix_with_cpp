#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>


#define ll long long

using namespace std;
 
int main(){
    int n,a=2,d=0;
    cin >> n;
    ll m1[100][100];
    ll m2[100][100];
    ll m3[100][100];
    ll xK = (rand()%n)+1;
    ll yK = (rand()%n)+1;
    for(int i=0;i<xK;i++)
        for(int j=0;j<yK;j++) {
            int aleatori = 
            m1[i][j]=(rand() % n)+1;
            m2[j][i]=(rand() % n)+1;
        }
    for(int x=0;x<xK;x++)
        for(int y=0;y<yK;y++)
            for(int z=0;z<yK;z++)
                m3[x][y]+= m1[x][z]*m2[z][y];
    cout << "\n\n";
    
    // view m1
    for(int x=0;x<xK;x++){
        cout << "|";
        for(int y=0;y<yK;y++){
            cout << " " << m1[x][y];
        }
        cout << " |\n";
    }
    
    cout << "\n\n";
    // view m2
    for(int x=0;x<yK;x++){
        cout << "|";
        for(int y=0;y<xK;y++){
            cout << " " << m2[x][y];
        }
        cout << " |\n";
    }

    cout << "\n\n";
    // view result
    for(int x=0;x<xK;x++){
        cout << "|";
        for(int y=0;y<xK;y++){
            cout << " " << m3[x][y];
        }
        cout << " |\n";
    }
}
