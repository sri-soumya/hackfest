/* This is a simple program for calculating the entropy of a simple graph with weighted edges.
*/
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n;
    cout << "Enter number of vertices" << endl;
    cin >> n;
    // we take a 2D vector to store the incidence matrix of the graph
    vector<vector<float>> mat( n , vector<float> (n, 0));
    cout << "Enter the incidence matrix of the graph : " << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < n; j++) {
            float x;
            cin >> x;
            mat[i][j] = x;
        }
    }
    // sum stores the sum for shanon entropy
    float sum = 0.0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i; j < n; j++) {
            if(mat[i][j] != 0){
                sum += mat[i][j]*log2(mat[i][j]);
            }
        }
    }
    cout << "The entropy of the graph is : " << endl;
    cout << -sum << endl;
}
