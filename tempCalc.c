/**
 * @file tempCalc.c
 * 
 * This modules handles values sampled by from the thermistor
 */

#define DESD_TEMP // the constant temp to hold the black box
#define TEMP_THRESH // the allowable threshold (high or low) for temperature 
#define SMP_DELAY // the time between individual samples in the sample set
#define CURR_INDEX // the current index of the beginning of the sample window in the queue
#define NUM_SAMPLES // number of samples to take before taking the average temp

typdef int* WINDOW_Q ; // the queue structure holding the window of samples

/**
 * This module calculates the sampled average temperature for each
 * sample in the window.
 * @returns Sampled Average Temperature
 */
void tempCalc(){
  /*	for sample in WINDOW_Q:	
		sample_avg = sample_avg + sample

		sample_avg = sample_avg / size(WINDOW_Q)	*/
}
