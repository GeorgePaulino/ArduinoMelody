/**
 * Author: George P.
 * Github: https://github.com/GeorgePaulino/Melody
 * Created: 07.05.2022
 * 
 * License: MIT
 **/

int melody[] = {
  N_E5, N_B4, N_C5, N_D5, N_C5, N_B4,
  N_A4, N_A4, N_C5, N_E5, N_D5, N_C5,
  N_B4, N_C5, N_D5, N_E5,
  N_C5, N_A4, N_A4, N_A4, N_B4, N_C5,

  N_D5, N_F5, N_A5, N_G5, N_F5,
  N_E5, N_C5, N_E5, N_D5, N_C5,
  N_B4, N_B4, N_C5, N_D5, N_E5,
  N_C5, N_A4, N_A4, REST,

  N_E5, N_C5,
  N_D5, N_B4,
  N_C5, N_A4,
  N_GS4, N_B4, REST,
  N_E5, N_C5,
  N_D5, N_B4,
  N_C5, N_E5, N_A5,
  N_GS5, REST,
  };
int duration[] = {
  4, 8, 8, 4, 8, 8,
  4, 8, 8, 4, 8, 8,
  -4, 8, 4, 4,
  4, 4, 8, 8, 8, 8,

  -4, 8, 4, 4, 4,
  -4, 8, 4, 4, 4,
  4, 8, 8, 4, 4,
  4, 4, 4, 4,

  2, 2,
  2, 2,
  2, 2,
  2, 4, 4,
  2, 2,
  2, 2,
  4, 4, 2,
  2, 1,
  };
