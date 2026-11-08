# Green Efficiency Analysis

## Measurement Methodology

All programs were compiled with gcc using the flags -Wall -Werror -Wextra -pedantic and executed on Ubuntu under WSL on Windows. Each program measures time with clock() from <time.h>, converted to seconds with CLOCKS_PER_SEC. clock() reports CPU time used by the process, not wall-clock time.

For baseline_loop, I ran the program three times consecutively, each performing 100,000,000 iterations. For comparison_algorithms, I ran it five times and computed averages with awk from the saved outputs. For instrumentation_lab, I added timers around each phase (build, process, reduce) and one outer timer around all three phases for the total. The printing happens outside the timed regions so that I/O cost does not distort the results.

## Observed Performance Differences

The baseline loop gave 0.417373, 0.422113 and 0.388493 seconds. The runs differ by about 0.034 seconds between fastest and slowest, even though the computation is identical and deterministic. This shows that timing varies from run to run.

In the algorithm comparison, the naive implementation averaged 4.752762 seconds across five runs, while the single-pass implementation averaged 0.000174 seconds. The naive version is about 27,346 times slower. Both returned correct results (625025000 and 25000 respectively) over the same data, so the difference comes from the algorithm only. The naive version visits roughly n(n+1)/2 elements for n = 50,000, while the single-pass version visits n elements.

In the instrumentation lab, the three phases measured [BUILD_DATA: ... s], [PROCESS: ... s] and [REDUCE: ... s], with a total of [TOTAL: ... s] over [N] runs. The phase that took the most time was [phase name], accounting for about [X]% of the total. [Add one sentence: is TOTAL >= each phase, and does the sum of phases match TOTAL?]

## Relation Between Runtime and Energy Consumption

I did not measure energy directly, so I cannot report joules. What I can state is that a processor busy for longer is executing more instructions and drawing power for a longer period. Under that assumption, the naive algorithm, which kept the CPU busy for about 4.75 seconds versus 0.000174 seconds for the single-pass version, would consume far more energy for the same result. This is a reasoned link between CPU time and energy, not a measured energy value.

## Limitations of the Experiment

First, clock() has limited resolution and measures CPU time. The single-pass algorithm took 0.000174 seconds, a value small enough that measurement noise could be a large fraction of it. [Mention if any phase printed 0.000000.]

Second, the sample is small: three runs for the baseline and five for the comparison. The baseline spread of about 0.034 seconds shows that more runs would give more reliable averages.

Third, the programs ran under WSL on a machine with other background processes, so scheduling and other load may have affected the times. Fourth, no energy meter was used, so the energy discussion is an inference only. Finally, results are specific to my hardware and compiler flags, and different optimization levels could change them.

## Practical Engineering Takeaway

The largest gain in my measurements came from changing the algorithm, not from tuning details: a 27,346x reduction in time between the naive and single-pass versions. Before optimizing code, I should measure which phase dominates, as the instrumentation lab does, and then focus effort there. I should also repeat measurements several times, report averages, and state the measurement method, since a single run can mislead. Shorter runtime usually means less CPU work, so choosing an efficient algorithm is a practical way to reduce resource and energy use.
