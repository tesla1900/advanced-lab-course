# Objectives

A list of questions we need to answer / perform analysis with for our lab. Most of this is obtained from e106_assignments.pdf

1. Understand what we did in the lab
- procedure of each step 
- details regarding each step (what we used / tricks / small things that we had to do to make it work)
- how we measured things
- how we considered the uncertainties
- set-up for each part
- what we did wrong / correct

2. Perform analysis
3. Write Report
  

## Questions

Questions that are from the assignment sheet that we need to address:

**Calibration**
- Why is calibration for measurement necessary?
- Effect of calibration at the VNA
- Changes that we see in VNA

**Coaxial cable**
- What is the difference between attenuation / reflection we obtain from each coaxial cable

**Scalar Measurement**
- Which modes split up to two polarization directions?
- Why do top vs side coupling give different results?
  - due to the different modes
- What assumption in calculation contributes most ? 

**Vector Measurement**
- How can we observe the reflection coefficient directly after calibrating the VNA?


### Analysis

**Coaxial cable**
- compare between the two coaxial cables. This means to plot the transmission and reflection coefficient for both of them and see how they evolve

- compare with analytical values from datasheet

- also make plots for the silver wire as well (for calibration check purpose)

**Scalar measurement**
- check if coupling coefficient is calculated correctly
  - and also rho at FWHM
- calculate quality factor from FWHM
  - calculate errors using error propagation as well
- plot all relevant quantities against each other
  - kappa vs rho
  - kappa vs omega
  - Q vs rho
  - Q vs omega
- compare with analytical results
  - resonant frequency
  - reflection coefficient
  - coupling 
  - quality factor
- do same thing for side coupling
- plot side vs top for each variable

**Vector measurement**
- calculate quality factor, unloaded quality factor, external quality factor, power loss of cavity
  - again consider errors with error propagation
- do same for calibrated results

**Bead-Pull measurement**
- calculate following from unperturbed results:
  - resonant frequency, reflection coefficient
  - coupling constant, quality factor
  - stored energy, power loss
- calculate electric field from data
  - errors
  - get perturbation constant from position of bead
- calculate shunt impedance
  - use integration techniques (gauss-legendre)
  - consider time transit factor also
- plot electric field vs position
- compare results with analytical ones

- calculate energy gain of electron after going through our cavity (analytically)
  - use ultrarel. particles with input power of 10kW
- evaluate how suited cavity is to accelerate charged particles
  - typical values: for 100kW power we get ~MeV acceleration voltage
- think of over applications for cavity other than accelerating particles 
  - applications of waveguides


### Equipment
- understand the setup
  - each component of the cavity and their differences
    - inner diameter of 78.5mm, length 20mm
    - cavity with two couplings (side, top)
    - cavity on the ramp (for bead-pull measurement, coupling at top)
  - the VNA