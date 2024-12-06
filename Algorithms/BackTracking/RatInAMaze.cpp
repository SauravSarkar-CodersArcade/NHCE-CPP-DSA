#include <iostream>
using namespace std;
bool isPathSafe(int** arr, int x, int y, int n){
    if (x < n && y < n && arr[x][y] == 1){
        return true;
    }
    return false;
}
bool ratInMaze(int** arr, int x, int y, int n,
               int** resultantArray){
    // Base Case :: If rat has reached destination
    if (x == (n-1) && y == (n-1)){
        resultantArray[x][y] = 1; // Mark destination cell [1]
        return true;
    }
    // Check if the current position/cell is safe to stand/move
    if (isPathSafe(arr,x,y,n)){
        resultantArray[x][y] = 1; // Mark the curr pos = 1
        // Move forward/right to check if path exists
        if (ratInMaze(arr,x+1,y,n,resultantArray)){
            return true;
        }
        // Move downward to check is path exists
        if (ratInMaze(arr,x,y+1,n,resultantArray)){
            return true;
        }
        // We are traversing back because we hit the wall
        // So, we update the path [x][y] = 0
        resultantArray[x][y] = 0; // Backtracking
        return false;
    }
    return false;
}
int main() {
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    // Allocate memory dynamically for 2D MAze Array
    int ** arr = new int * [n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[n];
    }
    // Input the maze array values
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }
    // Allocate memory dynamically for 2D Resultant Array and add 0s
    int ** resultantArray = new int * [n];
    for (int i = 0; i < n; ++i) {
        resultantArray[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            resultantArray[i][j] = 0;
        }
    }
    if (ratInMaze(arr,0,0,n,resultantArray)){
        // Print the resultant path of rat in the maze
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << resultantArray[i][j] << " ";
            }cout << endl;
        }
    }else{
        cout << "No path for the rat in the maze exists." << endl;
    }
    // Deallocate the memory after use
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
        delete[] resultantArray[i];
    }
    delete[] arr;
    delete[] resultantArray;
    return 0;
}
