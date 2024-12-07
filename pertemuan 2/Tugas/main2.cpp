#include<iostream>

using namespace std;

int main(){

    //Memberikan nama kepada sebuah variabel
    int bebek,teman,hasilBebek,sisaBebek;

    //Mengisi sebuah variabel
    bebek = 79;
    teman = 6;

    //Memberi tahu jumlah bebek dan teman yang pak tatang miliki
    cout<< "Jumlah bebek yang dimiliki oleh Pak Tatang saat ini adalah "<<bebek<<endl;
    cout<< "Jumlah teman yang akan dibagikan seekor bebek oleh Pak Tatang berjumlah "<<teman<<endl<<endl;

    //Mengoprasikan pembagian bebek dengan jumlah teman
    hasilBebek = bebek/teman;
    cout<< "Karna Pak Tatang sedang berulang tahun, maka Pak Tatang berencana membagikan bebek bebeknya kepada temannya.\n";
    cout<< "Bebek yang bisa dibagikan Pak Tatang kepada teman temanya adalah sebanyak "<< hasilBebek <<endl;

    //Mengoprasikan sisa bebek yang pak tatang miliki setelah dibagikan kepada teman-temanya
    sisaBebek = bebek%teman;
    cout<< "Sisa bebek yang masih dimiliki Pak tatang sekarang adalah "<< sisaBebek<<endl;

    return 0;

}
