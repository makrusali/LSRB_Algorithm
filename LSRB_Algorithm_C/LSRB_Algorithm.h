#ifndef __LSRB_ALGORITHM__
#define __LSRB_ALGORITHM__

#ifndef  uint8_t
#define uint8_t unsigned char
#endif // ! uint8_t

/*
* @brief fungsi untuk mengambil jumlah string
* @param none
* @return jumlah string
*/
uint8_t LSRB_get_size(char* path);

/*
* @brief fungsi untuk menggabungkan string dengan character
* @param string tujuan, character
* @return none
*/
void LSRB_concat(char* destination, char path);

/*
* @brief fungsi untuk menghapus string
* @param string tujuan
* @return none
*/
void LSRB_clear(char* destination);

/*
* @brief fungsi untuk menyalin dan mereplace
* @param string tujuan, string sumber
* @return none
*/
void LSRB_copy(char* destination, char* from);

/*
* @brief fungsi untuk menyederhanakan belokan dengan algortma LSRB
* @param path yang di sederhanakan , temporary path untuk keperluan fungsi
* @return none
*/
void LSRB_Algorithm(char* path, char* temp_path);

#endif
