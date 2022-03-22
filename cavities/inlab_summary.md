# Summary of In-Lab

summary of what we did during the lab.

## Coaxial Cable measurement
measured attenuation and reflection coefficient of different coaxial cables

Used 3 types of cables:
- Silver (RG402): length 30.02 +- 0.10 cm
- Brown (RG142): length 51.02 +- 0.10 cm
- Blue (ST18): length 182.55 +- 0.10cm

What we did:
1. Performed full two-port calibration of the silver wire
   1. connect silver wire to port 1
   2. go to CAL -> Full two-port -> SMA male (silver wire), SMA female (port 2 on VNA) -> TOSM (algorithm for calibration)
   3. THROUGH: connect silver wire to port 2
   4. OPEN: connect the open calibration socket to port 1 / 2
   5. SHORT: same as above but with short 
   6. MATCH: same as above but with load of 50 Ohms
2. Measured transmission and reflection coefficient of silver wire
   1. Transmission: use S21 measurement, Should be 0 for all resonant frequencies
   2. Reflection: connect load to end of silver wire
   3. we measured this for 4 frequencies
3. Connected each coaxial (brown / blue) to end of silver wire
4. Measured Transmission and reflection of each coaxial wire

Additional notes:
- touching / moving cable affected the readings
- presence of electronic items also affected it
- used adapters that had negligible influence on calibration

## Scalar measurement
measured reflection coefficient and FWHM at each resonant frequency

We used the brown coaxial cable directly (from port 1 of VNA)

What we did:
1. Connect brown cable to coupling port of cavity (top or side)
2. Find the resonant frequency in the VNA
   1. Look at regions where the resonant frequency would be at based on analytical resonant modes
   2. Adjust the SPAN (range of frequencies) and keep AUTOSCALE until we get an optimal view (shows some behaviour away from peak). Easy way is to set marker to be at minimum using MIN MODE and then center the display using that marker. SPAN should not be so small since after calibration, if we zoom out then the calibration breaks.
3. Perform full one-port calibration
   1. remove cable from cavity
   2. go to CAL -> full one-port -> SMA male (from brown cable)
      1. OPEN, SHORT, MATCH as before
   Here cable was calibrated in direction in which it would plug into cavity (for max calibration accuracy). Calibration is good when the reflection coefficient is zero away from peak
4. Measure resonant frequency and coefficient at peak
   1. used marker at minimum of plot
5. Calculate the coupling coefficient and thus coefficent at FWHM from formula in class
   1. We used a python script for this
6. Use coefficeint at FWHM to find where FWHM is
   1. Manually adjust other two markers at locations near coefficeint at FWHM
   2. Use Delta feature to get difference between one markaer and another
7. Repeat for each resonant frequency that we can find
8. Repeat 1-7 for the cavity with side coupling

What we observed:
- stronger fluctuations at higher frequencies
- after calibration, curve away from peak asymptotically leads more towards 0dB for higher frequency
  - except those where curves are highly oscillatory
- some modes (ex. 7.750 GHz) had resonance right next to it
  - possible candidate for two polarization direction
  - noisy and very small amplitude
  - we werent able to determine FWHM using our formula
- adaptors / direction of wire when we calibrate affected sensitivity of calibration for smalller resonance peaks

## Vector Measurement
measured reflection coefficient and FWHM at lowest resonant frequency using vectorial method

We used the brown coaxial cable again

What we did:
1. Connect brown cable to coupling port of cavity
2. Find resonant frequency using scalar method
3. Go to complex representation and adjust circle until location of resonant frequency intersects with real axis
   1. we look at linear polar diagram
   2. take note of phase offset (used to determine length of conductor)
4. We went back to scalar representation to find FWHM (same method as above) since we were not able to use the FWHM method for vectorial measurement to determine FWHM.
5. Then we went to complex representation and noted down points
6. Now do the same thing after calibration

What we should have done:
- find distance between resonant frequency and reflection circle
- also find diameter of reflection circle
- then find rho_0 by taking their ratio, use this to calculate the coupling coefficient
- then find rho_0 at FWHM using formula

For calibrated results, only need to look at intersection of resonant circle with imaginary axis (i.e. 90 degrees to real axis)


What we did wrong:
- didnt normalize with respect to impedance


Furthermore, we didnt have time to do the same analysis for a further resonant mode.


### Bead-pull measurement

used brown coaxial cable again
first mode === TM010, with E-field down the middle
  - frequently used in linear accelerators

What we did:
1. connected coaxial cable to top of cavity on ramp
2. found the first resonant frequency and calibrated (one-port) 
3. found the resonant frequency and the FWHM as per scalar measurement method
4. placed markers at each spot, as well as a 4th marker that tracks the minimum when the values vary
5. moved the bead 1mm each to the right (bead goes from left to right) 
6. measured the change in resonant frequency and reflection coefficient wrt the original values
7. did this until the bead has escaped the cavity


**Additional considerations**
- cavity on ramp is not a true cavity since the ends are not sealed
- bead is on a thread, the efffects due to thread is negligible

