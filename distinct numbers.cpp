// This code works for know  how many differents numbers there are in a list ordered or disordered
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    // Ordenamos los números de menor a mayor
    sort(x.begin(), x.end());

    // Si la lista no está vacía, al menos hay 1 número diferente
    int valores_distintos = 1;

    // Recorremos la lista comparando cada elemento con el anterior
    for (int i = 1; i < n; i++) {
        if (x[i] != x[i - 1]) {
            valores_distintos++;
        }
    }

    cout << valores_distintos << "\n";

    return 0;
}
