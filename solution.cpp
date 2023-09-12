#include <string>
#include <iostream>



int solution(string dna) {
  int loop = 0;
  for (int i = 0; i < dna.size()-1; i++) {
    if ((dna[i] == 'D' && dna[i+1] == 'N') || (dna[i] == 'N' && dna[i+1] == 'D')) {
      dna.append('A');
      dna.erase(i, 1);
      i = 0;
    }
    if ((dna[i] == 'A' && dna[i+1] == 'N') || (dna[i] == 'N' && dna[i+1] == 'A')) {
      dna.append('D');
      dna.erase(i, 1);
      i = 0;
    }
    if ((dna[i] == 'D' && dna[i+1] == 'A') || (dna[i] == 'A' && dna[i+1] == 'D')) {
      dna.append('N');
      dna.erase(i, 1);
      i = 0;
    }
    loop++;
  }
}
    
