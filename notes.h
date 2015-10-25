 
// NB: ALL NOTES DEFINED WITH STANDARD ENGLISH NAMES, EXCEPT FROM "A" 
//THAT IS CALLED WITH THE ITALIAN NAME "LA" BECAUSE A0,A1...ARE THE ANALOG PINS ON ARDUINO.
// (Ab IS CALLED Ab AND NOT LAb)
#define PAUSE -1
#define	HZ_C0   16.35
#define	HZ_Db0	17.32
#define	HZ_D0	18.35
#define	HZ_Eb0	19.45
#define	HZ_E0	20.60
#define	HZ_F0	21.83
#define	HZ_Gb0	23.12
#define	HZ_G0	24.50
#define	HZ_Ab0	25.96
#define	HZ_A0	27.50
#define	HZ_Bb0	29.14
#define	HZ_B0	30.87
#define	HZ_C1	32.70
#define	HZ_Db1	34.65
#define	HZ_D1	36.71
#define	HZ_Eb1	38.89
#define	HZ_E1	41.20
#define	HZ_F1	43.65
#define	HZ_Gb1	46.25
#define	HZ_G1	49.00
#define	HZ_Ab1	51.91
#define	HZ_A1	55.00
#define	HZ_Bb1	58.27
#define	HZ_B1	61.74
#define	HZ_C2	65.41
#define	HZ_Db2	69.30
#define	HZ_D2	73.42
#define	HZ_Eb2	77.78
#define	HZ_E2	82.41
#define	HZ_F2	87.31
#define	HZ_Gb2	92.50
#define	HZ_G2	98.00
#define	HZ_Ab2	103.83
#define	HZ_LA2	110.00
#define	HZ_Bb2	116.54
#define	HZ_B2	123.47
#define	HZ_C3	130.81
#define	HZ_Db3	138.59
#define	HZ_D3	146.83
#define	HZ_Eb3	155.56
#define	HZ_E3	164.81
#define	HZ_F3	174.61
#define	HZ_Gb3	185.00
#define	HZ_G3	196.00
#define	HZ_Ab3	207.65
#define	HZ_A3	220.00
#define	HZ_Bb3	233.08
#define	HZ_B3	246.94
#define	HZ_C4	261.63
#define	HZ_Db4	277.18
#define	HZ_D4	293.66
#define	HZ_Eb4	311.13
#define	HZ_E4	329.63
#define	HZ_F4	349.23
#define	HZ_Gb4	369.99
#define	HZ_G4	392.00
#define	HZ_Ab4	415.30
#define	HZ_A4	440.00
#define	HZ_Bb4	466.16
#define	HZ_B4	493.88
#define	HZ_C5	523.25
#define	HZ_Db5	554.37
#define	HZ_D5	587.33
#define	HZ_Eb5	622.25
#define	HZ_E5	659.26
#define	HZ_F5	698.46
#define	HZ_Gb5	739.99
#define	HZ_G5	783.99
#define	HZ_Ab5	830.61
#define	HZ_A5	880.00
#define	HZ_Bb5	932.33
#define	HZ_B5	987.77
#define	HZ_C6	1046.50
#define	HZ_Db6	1108.73
#define	HZ_D6	1174.66
#define	HZ_Eb6	1244.51
#define	HZ_E6	1318.51
#define	HZ_F6	1396.91
#define	HZ_Gb6	1479.98
#define	HZ_G6	1567.98
#define	HZ_Ab6	1661.22
#define	HZ_A6	1760.00
#define	HZ_Bb6	1864.66
#define	HZ_B6	1975.53
#define	HZ_C7	2093.00
#define	HZ_Db7	2217.46
#define	HZ_D7	2349.32
#define	HZ_Eb7	2489.02
#define	HZ_E7	2637.02
#define	HZ_F7	2793.83
#define	HZ_Gb7	2959.96
#define	HZ_G7	3135.96
#define	HZ_Ab7	3322.44
#define	HZ_A7	3520.01
#define	HZ_Bb7	3729.31
#define	HZ_B7	3951.07
#define	HZ_C8	4186.01
#define	HZ_Db8	4434.92
#define	HZ_D8	4698.64
#define	HZ_Eb8	4978.03
// DURATION OF THE NOTES 
#define BPM 120     // you can change this value changing all the others
#define L_Q (60000/BPM) //quarter 1/4 
#define L_H (2*L_Q) //half 2/4
#define L_E (L_Q/2)   //eighth 1/8
#define L_S (L_Q/4) // sixteenth 1/16
#define L_W (4*L_Q) // whole 4/4
