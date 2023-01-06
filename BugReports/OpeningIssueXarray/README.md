This got discussed at https://github.com/pydata/xarray/issues/7421 .

Conclusion:

- The version of libnetcdf I was using on my laptop was causing some segfault when reading the file. Using a conda env with the newest package versions fixed that
- The file was using UNLIMITED dimensions in the wrong way; from the conda env, re-dumping the file as a fixed size dimensions file should solve the thredds issues.
