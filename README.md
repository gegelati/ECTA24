# PPSN 2024 Artifacts

This repository is associated to the following publication **(under review)**:

*Q. Vacher, N. Beuve, P. Allaire, T. Marty, M. Dardaillon and K. Desnos. Low-complexity Genetic Reinforcement Learning for Robot Arm Trajectory Planning*

The repository contains:
* Code and scripts to reproduce the experiments presented in the paper.
* Experimental data and logs produced by the authors and presented in the paper.

## Repository content
```
├─ ECTA24-artifacts                                  # root folder
│  │                                           
│  ├─ gegelati                                       # git submodule pointing to gegelati develop commit: 9b4092f
│  │  │...                                     
│  │                                           
│  ├─ armlearn-wrapper                               # git submodule pointing to the ArmLearn Environment
│  │  │...                                           # wrapper for gegelati.
│  │
│  ├─ mainAnalysis.ipynb                             # Jupyter Notebook with the main different plots and analysis
│  │
│  ├─ moreLessValuableCurves.ipynb                   # Jupyter Notebook with other different plots and analysis
│  │   
│  ├─ data                                           # Experimental data.
│  │  │                                        
│  │  │                                        
│  │  │                                        
│  │  ├─ experimentalStudy1                          # Folder containing the performances of the first experimental study
│  │  │  │
│  │  │  ├─ multiTraining_x                          # One configuration with params and different seeds.
│  │  │  │
│  │  │  │  
│  │  │  │  ├─ params                                # Parameter forlder containing the different parameters
│  │  │  │  │  
│  │  │  │  │  
│  │  │  │  ├─ outLogs                               # Folder of logs.
│  │  │  │  │
│  │  │  │  │
│  │  │  │  │  ├─ logsGegelati.ods                   # Logs from the training.               
│  │  │  │  │  │
│  │  │  │  │  ├─ bestPolicyStats.md                 # Statistics of champion TPGs throughout the generations.
│  │  │  │  │  │                      
│  │  │  │  │  ├─ out_best.dot                       # Champion TPG after all generations.
│  │  │  │  │  │
│  │  │  │  │  ├─ out_best_stats.md                  # Statistics about the champion.
│  │  │  │  │  │
│  │  │  │  │  ├─ outputGegelati.csv                 # Logs from the testing.
│  │  │  ├─ ...       
│  │  │
│  │  ├─ expeStudy2                                  # Folder containing the performances of the second experimental study
│  │  │  
│  │  ├─ ...                                         # All the other data for SAC and hybrid solution, in the same format
│  │   
│  ├─ results                                        # Folder with the different figures obained
```
