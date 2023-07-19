#include <iostream>
#include <vector>
using namespace std;
class FixedSizeQueue {
private:
vector<int> dat;
int fro;
int re;
public:
FixedSizeQueue(int size) {
dat.resize(size);
fro = 0;
re = 0;
}
void enqueue(int value) {
if (re == dat.size()) {
cout << "queue is full" << endl;
return;
}
dat[re++] = value;
}
int dequeue() {
if (fro == re) {
cout << "queue is empty" << endl;
return -1;
}
return dat[fro++];
}
void print() {
for (int i = fro; i < re; i++) {
cout << dat[i] << " ";
}
cout << endl;
}
};
int main() {
int n;
cin >> n;
vector<int> a(n);
for (int i = 0; i < n; i++) {
cin >> a[i];
}
FixedSizeQueue q(10);
for (int i = 0; i < n; i++) {
switch (a[i]) {
case 1:
q.enqueue(a[i + 1]);
break;
case 2:
q.dequeue();
break;
case 3:
q.print();
break;
}
}
return 0;
}