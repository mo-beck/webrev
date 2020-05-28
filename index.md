<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8" />
    <link rel="stylesheet" href="style.css" />
    <link rel="shortcut icon" type="image/x-icon" href="nanoduke.ico" />
  </head>
  <body>
    <div class="summary">
      <h2 class="summary">Code Review for jdk_tip-01-22</h2>
      <table class="summary">        <tr>
          <th>Prepared by:</th>
          <td>Monica Beckwith on Thu May 28 07:28:43 CDT 2020</td>
        </tr>        <tr>
          <th>Compare against version:</th>
          <td>8414f5b7</td>
        </tr>        <tr>
          <th>Summary of changes:</th>
          <td>8835 lines changed; 6778 ins; 1367 del; 690 mod; 101060 unchg</td>
        </tr>        <tr>
          <th>Patch of changes:</th>
          <td><a href="jdk_tip-01-22.patch">jdk_tip-01-22.patch</a></td>
        </tr>         <tr>
           <th>Legend:</th>
           <td><span class="file-modified">Modified file</span><br><span class="file-removed">Deleted file</span><br><span class="file-added">New file</span></td>
        </tr>
      </table>
    </div><p>
  <code>
  
<p>
  <code>
<a href="src\hotspot\cpu\aarch64\aarch64.ad.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\aarch64.ad.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\aarch64.ad.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\aarch64.ad.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\aarch64.ad-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\aarch64.ad.html">New</a>
<a href="src\hotspot\cpu\aarch64\aarch64.ad.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\aarch64.ad">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\aarch64.ad</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
cbedb4c6: Use functions defined in globalDefinitions.hpp
9870ebb2: Fix register allocation for vector operations
f96ffffa: Reenable some features for C2
eae341f7: Disable R18 on Windows/ARM64
3baebf97: Changed or removed most of the recasts into the original. Also changed
39b671ee: register alloc work and istub
afc986ba: LP64 vs LLP64
c881b2e8: makefile ad file LIR files all with compilation issues. Added comments
a6882029: Updated Adlc path to x86-64 and update aarch64.d to not yet have the  </pre>
  <span class="stat">
62 lines changed; 6 ins; 0 del; 56 mod; 18061 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\assembler_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\assembler_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\assembler_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\assembler_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\assembler_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\assembler_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\assembler_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\assembler_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\assembler_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
cbedb4c6: Use functions defined in globalDefinitions.hpp
3baebf97: Changed or removed most of the recasts into the original. Also changed
1296e603: employing existing instruction_size
29ccf90c: register defn and decl, flush icache changes
afc986ba: LP64 vs LLP64
2320943e: LP64 vs LLP64 changes for common
c881b2e8: makefile ad file LIR files all with compilation issues. Added comments
781eec66: rebase on 8414f5b7554a5e52050a192d75d35d42d53cd907  </pre>
  <span class="stat">
16 lines changed; 7 ins; 1 del; 8 mod; 1779 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\assembler_aarch64.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\assembler_aarch64.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\assembler_aarch64.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\assembler_aarch64.hpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\assembler_aarch64.hpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\assembler_aarch64.hpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\assembler_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\assembler_aarch64.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\assembler_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
2320943e: LP64 vs LLP64 changes for common
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64
c881b2e8: makefile ad file LIR files all with compilation issues. Added comments
0166d9c6: changes to assembler and macroassembler. Added defn to global for ARM64  </pre>
  <span class="stat">
36 lines changed; 9 ins; 1 del; 26 mod; 2681 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\c1_Defs_aarch64.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\c1_Defs_aarch64.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\c1_Defs_aarch64.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\c1_Defs_aarch64.hpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\c1_Defs_aarch64.hpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\c1_Defs_aarch64.hpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\c1_Defs_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\c1_Defs_aarch64.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\c1_Defs_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
747982c0: Cleanup and self-document C1 use of R18
39b671ee: register alloc work and istub  </pre>
  <span class="stat">
6 lines changed; 0 ins; 0 del; 6 mod; 75 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\c1_FpuStackSim_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\c1_FpuStackSim_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\c1_FpuStackSim_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\c1_FpuStackSim_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\c1_FpuStackSim_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\c1_FpuStackSim_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\c1_FpuStackSim_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\c1_FpuStackSim_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\c1_FpuStackSim_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
c881b2e8: makefile ad file LIR files all with compilation issues. Added comments  </pre>
  <span class="stat">
1 lines changed; 1 ins; 0 del; 0 mod; 30 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\c1_FrameMap_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\c1_FrameMap_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\c1_FrameMap_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\c1_FrameMap_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\c1_FrameMap_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\c1_FrameMap_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\c1_FrameMap_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\c1_FrameMap_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\c1_FrameMap_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
747982c0: Cleanup and self-document C1 use of R18
eae341f7: Disable R18 on Windows/ARM64
39b671ee: register alloc work and istub  </pre>
  <span class="stat">
8 lines changed; 8 ins; 0 del; 0 mod; 357 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\c1_LIRAssembler_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\c1_LIRAssembler_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\c1_LIRAssembler_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\c1_LIRAssembler_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\c1_LIRAssembler_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\c1_LIRAssembler_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\c1_LIRAssembler_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\c1_LIRAssembler_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\c1_LIRAssembler_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
3baebf97: Changed or removed most of the recasts into the original. Also changed
afc986ba: LP64 vs LLP64
c881b2e8: makefile ad file LIR files all with compilation issues. Added comments  </pre>
  <span class="stat">
5 lines changed; 0 ins; 1 del; 4 mod; 3201 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\c1_LIRGenerator_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\c1_LIRGenerator_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\c1_LIRGenerator_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\c1_LIRGenerator_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\c1_LIRGenerator_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\c1_LIRGenerator_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\c1_LIRGenerator_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\c1_LIRGenerator_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\c1_LIRGenerator_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
c881b2e8: makefile ad file LIR files all with compilation issues. Added comments  </pre>
  <span class="stat">
1 lines changed; 0 ins; 0 del; 1 mod; 1418 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\compiledIC_aot_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\compiledIC_aot_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\compiledIC_aot_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\compiledIC_aot_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\compiledIC_aot_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\compiledIC_aot_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\compiledIC_aot_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\compiledIC_aot_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\compiledIC_aot_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
c881b2e8: makefile ad file LIR files all with compilation issues. Added comments  </pre>
  <span class="stat">
1 lines changed; 1 ins; 0 del; 0 mod; 104 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\frame_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\frame_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\frame_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\frame_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\frame_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\frame_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\frame_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\frame_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\frame_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
2320943e: LP64 vs LLP64 changes for common
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64  </pre>
  <span class="stat">
18 lines changed; 0 ins; 1 del; 17 mod; 802 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\gc\shared\barrierSetAssembler_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\gc\shared\barrierSetAssembler_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\gc\shared\barrierSetAssembler_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\gc\shared\barrierSetAssembler_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\gc\shared\barrierSetAssembler_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\gc\shared\barrierSetAssembler_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\gc\shared\barrierSetAssembler_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\gc\shared\barrierSetAssembler_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\gc\shared\barrierSetAssembler_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
2320943e: LP64 vs LLP64 changes for common  </pre>
  <span class="stat">
2 lines changed; 0 ins; 0 del; 2 mod; 229 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\icache_aarch64.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\icache_aarch64.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\icache_aarch64.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\icache_aarch64.hpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\icache_aarch64.hpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\icache_aarch64.hpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\icache_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\icache_aarch64.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\icache_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
571689ca: Simplify ICache on ARM64
29ccf90c: register defn and decl, flush icache changes
c881b2e8: makefile ad file LIR files all with compilation issues. Added comments  </pre>
  <span class="stat">
6 lines changed; 6 ins; 0 del; 0 mod; 44 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\immediate_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\immediate_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\immediate_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\immediate_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\immediate_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\immediate_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\immediate_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\immediate_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\immediate_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
2320943e: LP64 vs LLP64 changes for common
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64  </pre>
  <span class="stat">
56 lines changed; 3 ins; 0 del; 53 mod; 306 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\immediate_aarch64.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\immediate_aarch64.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\immediate_aarch64.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\immediate_aarch64.hpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\immediate_aarch64.hpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\immediate_aarch64.hpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\immediate_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\immediate_aarch64.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\immediate_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
aaee6ea8: Use single, cross-platform type for 64bits integers  </pre>
  <span class="stat">
4 lines changed; 0 ins; 0 del; 4 mod; 50 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\interp_masm_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\interp_masm_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\interp_masm_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\interp_masm_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\interp_masm_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\interp_masm_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\interp_masm_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\interp_masm_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\interp_masm_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
2320943e: LP64 vs LLP64 changes for common
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64  </pre>
  <span class="stat">
7 lines changed; 5 ins; 0 del; 2 mod; 1832 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\interpreterRT_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\interpreterRT_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\interpreterRT_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\interpreterRT_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\interpreterRT_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\interpreterRT_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\interpreterRT_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\interpreterRT_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\interpreterRT_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
afc986ba: LP64 vs LLP64  </pre>
  <span class="stat">
1 lines changed; 0 ins; 0 del; 1 mod; 388 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\jniFastGetField_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\jniFastGetField_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\jniFastGetField_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\jniFastGetField_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\jniFastGetField_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\jniFastGetField_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\jniFastGetField_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\jniFastGetField_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\jniFastGetField_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
aaee6ea8: Use single, cross-platform type for 64bits integers
2320943e: LP64 vs LLP64 changes for common  </pre>
  <span class="stat">
2 lines changed; 0 ins; 0 del; 2 mod; 201 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\jvmciCodeInstaller_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\jvmciCodeInstaller_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\jvmciCodeInstaller_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\jvmciCodeInstaller_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\jvmciCodeInstaller_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\jvmciCodeInstaller_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\jvmciCodeInstaller_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\jvmciCodeInstaller_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\jvmciCodeInstaller_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64  </pre>
  <span class="stat">
1 lines changed; 0 ins; 0 del; 1 mod; 194 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\macroAssembler_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
8a5cd8a3: Remove undefined instruction
eae341f7: Disable R18 on Windows/ARM64
39b671ee: register alloc work and istub
2320943e: LP64 vs LLP64 changes for common
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64  </pre>
  <span class="stat">
80 lines changed; 0 ins; 1 del; 79 mod; 5854 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64.hpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64.hpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64.hpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\macroAssembler_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
2320943e: LP64 vs LLP64 changes for common
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64
c881b2e8: makefile ad file LIR files all with compilation issues. Added comments
0166d9c6: changes to assembler and macroassembler. Added defn to global for ARM64  </pre>
  <span class="stat">
23 lines changed; 4 ins; 0 del; 19 mod; 1385 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64_log.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64_log.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64_log.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64_log.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64_log.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64_log.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64_log.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64_log.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\macroAssembler_aarch64_log.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64  </pre>
  <span class="stat">
1 lines changed; 0 ins; 0 del; 1 mod; 364 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64_trig.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64_trig.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64_trig.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64_trig.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64_trig.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64_trig.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64_trig.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\macroAssembler_aarch64_trig.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\macroAssembler_aarch64_trig.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
203ebe5d: Fix cos and sin intrinsics
eae341f7: Disable R18 on Windows/ARM64
39b671ee: register alloc work and istub
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64  </pre>
  <span class="stat">
6 lines changed; 0 ins; 0 del; 6 mod; 1482 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\methodHandles_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\methodHandles_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\methodHandles_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\methodHandles_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\methodHandles_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\methodHandles_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\methodHandles_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\methodHandles_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\methodHandles_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
2320943e: LP64 vs LLP64 changes for common
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64  </pre>
  <span class="stat">
5 lines changed; 5 ins; 0 del; 0 mod; 452 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\nativeInst_aarch64.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\nativeInst_aarch64.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\nativeInst_aarch64.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\nativeInst_aarch64.hpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\nativeInst_aarch64.hpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\nativeInst_aarch64.hpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\nativeInst_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\nativeInst_aarch64.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\nativeInst_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
c881b2e8: makefile ad file LIR files all with compilation issues. Added comments  </pre>
  <span class="stat">
1 lines changed; 0 ins; 0 del; 1 mod; 705 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\register_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\register_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\register_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\register_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\register_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\register_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\register_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\register_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\register_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
747982c0: Cleanup and self-document C1 use of R18
eae341f7: Disable R18 on Windows/ARM64
29ccf90c: register defn and decl, flush icache changes
39b671ee: register alloc work and istub  </pre>
  <span class="stat">
1 lines changed; 0 ins; 0 del; 1 mod; 55 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\register_aarch64.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\register_aarch64.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\register_aarch64.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\register_aarch64.hpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\register_aarch64.hpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\register_aarch64.hpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\register_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\register_aarch64.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\register_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
aaee6ea8: Use single, cross-platform type for 64bits integers
2320943e: LP64 vs LLP64 changes for common  </pre>
  <span class="stat">
1 lines changed; 0 ins; 0 del; 1 mod; 269 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\sharedRuntime_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\sharedRuntime_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\sharedRuntime_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\sharedRuntime_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\sharedRuntime_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\sharedRuntime_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\sharedRuntime_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\sharedRuntime_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\sharedRuntime_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
3baebf97: Changed or removed most of the recasts into the original. Also changed
2320943e: LP64 vs LLP64 changes for common
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64  </pre>
  <span class="stat">
2 lines changed; 0 ins; 0 del; 2 mod; 3078 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\stubGenerator_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\stubGenerator_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\stubGenerator_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\stubGenerator_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\stubGenerator_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\stubGenerator_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\stubGenerator_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\stubGenerator_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\stubGenerator_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
cbedb4c6: Use functions defined in globalDefinitions.hpp
747982c0: Cleanup and self-document C1 use of R18
86d52dbf: Remove dead code
59ac9bc0: Fix type downcasting
dab10d48: Use Atomic intrinsics straight in atomic_windows_*.hpp
eae341f7: Disable R18 on Windows/ARM64
b3597710: Fix cast of value
3baebf97: Changed or removed most of the recasts into the original. Also changed
c0604a70: Implement atomics with platform intrinsics
29ccf90c: register defn and decl, flush icache changes
39b671ee: register alloc work and istub
2320943e: LP64 vs LLP64 changes for common
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64
a9ad5b8a: added the windows_arch64 based on linux_aarch64 and windows_x86  </pre>
  <span class="stat">
66 lines changed; 11 ins; 3 del; 52 mod; 5773 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\stubRoutines_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\stubRoutines_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\stubRoutines_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\stubRoutines_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\stubRoutines_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\stubRoutines_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\stubRoutines_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\stubRoutines_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\stubRoutines_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
203ebe5d: Fix cos and sin intrinsics
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64  </pre>
  <span class="stat">
27 lines changed; 0 ins; 0 del; 27 mod; 350 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\stubRoutines_aarch64.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\stubRoutines_aarch64.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\stubRoutines_aarch64.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\stubRoutines_aarch64.hpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\stubRoutines_aarch64.hpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\stubRoutines_aarch64.hpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\stubRoutines_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\stubRoutines_aarch64.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\stubRoutines_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
203ebe5d: Fix cos and sin intrinsics  </pre>
  <span class="stat">
3 lines changed; 0 ins; 0 del; 3 mod; 191 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\templateInterpreterGenerator_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\templateInterpreterGenerator_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\templateInterpreterGenerator_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\templateInterpreterGenerator_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\templateInterpreterGenerator_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\templateInterpreterGenerator_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\templateInterpreterGenerator_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\templateInterpreterGenerator_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\templateInterpreterGenerator_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
3baebf97: Changed or removed most of the recasts into the original. Also changed
2320943e: LP64 vs LLP64 changes for common
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64  </pre>
  <span class="stat">
1 lines changed; 0 ins; 0 del; 1 mod; 2051 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\templateTable_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\templateTable_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\templateTable_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\templateTable_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\templateTable_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\templateTable_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\templateTable_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\templateTable_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\templateTable_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
3baebf97: Changed or removed most of the recasts into the original. Also changed
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64  </pre>
  <span class="stat">
2 lines changed; 0 ins; 0 del; 2 mod; 4015 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\vm_version_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\vm_version_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\vm_version_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\vm_version_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\vm_version_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\vm_version_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\vm_version_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\vm_version_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\vm_version_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
632e85c4: Make sure we detect Atomics feature on TX2
daee60ab: Update to VS 2019 and Windows SDK 10.0.19041.0
150a1445: Ensure we use CAS on TX2 as it is supported.
dc63f6c6: Fix bug in vm_version_aarch64 and use _WIN64
6e030114: Implement check for AES
6748ed3a: added changes for cachelines and put if-defs for non-Win64 calls
2320943e: LP64 vs LLP64 changes for common  </pre>
  <span class="stat">
81 lines changed; 39 ins; 25 del; 17 mod; 406 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\vm_version_aarch64.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\vm_version_aarch64.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\vm_version_aarch64.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\vm_version_aarch64.hpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\vm_version_aarch64.hpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\vm_version_aarch64.hpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\vm_version_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\vm_version_aarch64.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\vm_version_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
dc63f6c6: Fix bug in vm_version_aarch64 and use _WIN64
6e030114: Implement check for AES
ef799211:  removed stale printfs
b6992f95: get cacheline size by get proc info win32 API
6748ed3a: added changes for cachelines and put if-defs for non-Win64 calls
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64  </pre>
  <span class="stat">
14 lines changed; 14 ins; 0 del; 0 mod; 131 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\cpu\aarch64\vm_version_ext_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\cpu\aarch64\vm_version_ext_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\cpu\aarch64\vm_version_ext_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\cpu\aarch64\vm_version_ext_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\cpu\aarch64\vm_version_ext_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\cpu\aarch64\vm_version_ext_aarch64.cpp.html">New</a>
<a href="src\hotspot\cpu\aarch64\vm_version_ext_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\cpu\aarch64\vm_version_ext_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\cpu\aarch64\vm_version_ext_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
2320943e: LP64 vs LLP64 changes for common  </pre>
  <span class="stat">
1 lines changed; 1 ins; 0 del; 0 mod; 90 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os\windows\osThread_windows.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os\windows\osThread_windows.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os\windows\osThread_windows.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os\windows\osThread_windows.hpp.frames.html">Frames</a>
<a href="src\hotspot\os\windows\osThread_windows.hpp-.html">Old</a>
<a href="src\hotspot\os\windows\osThread_windows.hpp.html">New</a>
<a href="src\hotspot\os\windows\osThread_windows.hpp.patch">Patch</a>
<a href="src\hotspot\os\windows\osThread_windows.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os\windows\osThread_windows.hpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
afc986ba: LP64 vs LLP64  </pre>
  <span class="stat">
1 lines changed; 0 ins; 0 del; 1 mod; 70 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os\windows\os_windows.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os\windows\os_windows.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os\windows\os_windows.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os\windows\os_windows.cpp.frames.html">Frames</a>
<a href="src\hotspot\os\windows\os_windows.cpp-.html">Old</a>
<a href="src\hotspot\os\windows\os_windows.cpp.html">New</a>
<a href="src\hotspot\os\windows\os_windows.cpp.patch">Patch</a>
<a href="src\hotspot\os\windows\os_windows.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os\windows\os_windows.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
aaee6ea8: Use single, cross-platform type for 64bits integers
40245f62: Fix NUMA initialization on Windows
cc5501cc: Catch more unsafe memory access as EXCEPTION_ACCESS_VIOLATION
cc5a56bf: There is no floating-point exception on Windows/ARM64
84fc9b24: Handle ACCESS_VIOLATION for UnsafeCopyMemory
114e048d: Factor some exception handling code
dab10d48: Use Atomic intrinsics straight in atomic_windows_*.hpp
04f0ada2: Switch to Vectored Exception Handling on Windows
6e030114: Implement check for AES
697fe70a: Factor implementation of HandleExceptionFromCodeCache on Windows
99699dc5: Merge branch 'master' of ssh.dev.azure.com:v3/ms-juniper/ARM64/openjdk-jdk
3baebf97: Changed or removed most of the recasts into the original. Also changed
61e3869a: Fix getting frame on Stack Overflow
010468d7: Refactor StubGenerator for both x86 and aarch64
f3ba97cf: Fix use of dpcs1 for deoptimization
dc2355e4: Add support for Exception Handling
a85651f9: getprocinfo for win32
771f4f9a: Fix assertion for Windows-Arm64
afc986ba: LP64 vs LLP64
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64
72f35b86: squashed the large file errors and other issues  </pre>
  <span class="stat">
233 lines changed; 93 ins; 101 del; 39 mod; 5466 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os\windows\os_windows.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os\windows\os_windows.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os\windows\os_windows.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os\windows\os_windows.hpp.frames.html">Frames</a>
<a href="src\hotspot\os\windows\os_windows.hpp-.html">Old</a>
<a href="src\hotspot\os\windows\os_windows.hpp.html">New</a>
<a href="src\hotspot\os\windows\os_windows.hpp.patch">Patch</a>
<a href="src\hotspot\os\windows\os_windows.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os\windows\os_windows.hpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
b6992f95: get cacheline size by get proc info win32 API  </pre>
  <span class="stat">
1 lines changed; 1 ins; 0 del; 0 mod; 220 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os\windows\threadCritical_windows.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os\windows\threadCritical_windows.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os\windows\threadCritical_windows.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os\windows\threadCritical_windows.cpp.frames.html">Frames</a>
<a href="src\hotspot\os\windows\threadCritical_windows.cpp-.html">Old</a>
<a href="src\hotspot\os\windows\threadCritical_windows.cpp.html">New</a>
<a href="src\hotspot\os\windows\threadCritical_windows.cpp.patch">Patch</a>
<a href="src\hotspot\os\windows\threadCritical_windows.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os\windows\threadCritical_windows.cpp</span>
<p>
<blockquote>
  <pre>
acf6d1d6: fixup! Use modern mechanism to initialize once ThreadCritical
81aa92c2: Use modern mechanism to initialize once ThreadCritical  </pre>
  <span class="stat">
37 lines changed; 8 ins; 20 del; 9 mod; 49 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\hotspot\os\windows\thread_windows.cpp.html">New</a>
<a href="src\hotspot\os\windows\thread_windows.cpp.patch">Patch</a>
<a href="src\hotspot\os\windows\thread_windows.cpp">Raw</a>
  </code>
  <span class="file-added">src\hotspot\os\windows\thread_windows.cpp</span>
<p>
<blockquote>
  <pre>
2b7e5e7b: Refactor JavaThread::pd_get_top_frame  </pre>
  <span class="stat">
100 lines changed; 100 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\aix_ppc\os_aix_ppc.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\aix_ppc\os_aix_ppc.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\aix_ppc\os_aix_ppc.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\aix_ppc\os_aix_ppc.hpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\aix_ppc\os_aix_ppc.hpp-.html">Old</a>
<a href="src\hotspot\os_cpu\aix_ppc\os_aix_ppc.hpp.html">New</a>
<a href="src\hotspot\os_cpu\aix_ppc\os_aix_ppc.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\aix_ppc\os_aix_ppc.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\aix_ppc\os_aix_ppc.hpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows  </pre>
  <span class="stat">
4 lines changed; 0 ins; 4 del; 0 mod; 31 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\bsd_x86\os_bsd_x86.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\bsd_x86\os_bsd_x86.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\bsd_x86\os_bsd_x86.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\bsd_x86\os_bsd_x86.hpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\bsd_x86\os_bsd_x86.hpp-.html">Old</a>
<a href="src\hotspot\os_cpu\bsd_x86\os_bsd_x86.hpp.html">New</a>
<a href="src\hotspot\os_cpu\bsd_x86\os_bsd_x86.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\bsd_x86\os_bsd_x86.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\bsd_x86\os_bsd_x86.hpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows  </pre>
  <span class="stat">
4 lines changed; 0 ins; 4 del; 0 mod; 31 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\bsd_zero\os_bsd_zero.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\bsd_zero\os_bsd_zero.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\bsd_zero\os_bsd_zero.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\bsd_zero\os_bsd_zero.hpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\bsd_zero\os_bsd_zero.hpp-.html">Old</a>
<a href="src\hotspot\os_cpu\bsd_zero\os_bsd_zero.hpp.html">New</a>
<a href="src\hotspot\os_cpu\bsd_zero\os_bsd_zero.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\bsd_zero\os_bsd_zero.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\bsd_zero\os_bsd_zero.hpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows  </pre>
  <span class="stat">
4 lines changed; 0 ins; 4 del; 0 mod; 48 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\linux_aarch64\os_linux_aarch64.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\linux_aarch64\os_linux_aarch64.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\linux_aarch64\os_linux_aarch64.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\linux_aarch64\os_linux_aarch64.hpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\linux_aarch64\os_linux_aarch64.hpp-.html">Old</a>
<a href="src\hotspot\os_cpu\linux_aarch64\os_linux_aarch64.hpp.html">New</a>
<a href="src\hotspot\os_cpu\linux_aarch64\os_linux_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\linux_aarch64\os_linux_aarch64.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\linux_aarch64\os_linux_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows  </pre>
  <span class="stat">
4 lines changed; 0 ins; 4 del; 0 mod; 37 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\linux_arm\os_linux_arm.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\linux_arm\os_linux_arm.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\linux_arm\os_linux_arm.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\linux_arm\os_linux_arm.hpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\linux_arm\os_linux_arm.hpp-.html">Old</a>
<a href="src\hotspot\os_cpu\linux_arm\os_linux_arm.hpp.html">New</a>
<a href="src\hotspot\os_cpu\linux_arm\os_linux_arm.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\linux_arm\os_linux_arm.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\linux_arm\os_linux_arm.hpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows  </pre>
  <span class="stat">
4 lines changed; 0 ins; 4 del; 0 mod; 65 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\linux_ppc\os_linux_ppc.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\linux_ppc\os_linux_ppc.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\linux_ppc\os_linux_ppc.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\linux_ppc\os_linux_ppc.hpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\linux_ppc\os_linux_ppc.hpp-.html">Old</a>
<a href="src\hotspot\os_cpu\linux_ppc\os_linux_ppc.hpp.html">New</a>
<a href="src\hotspot\os_cpu\linux_ppc\os_linux_ppc.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\linux_ppc\os_linux_ppc.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\linux_ppc\os_linux_ppc.hpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows  </pre>
  <span class="stat">
4 lines changed; 0 ins; 4 del; 0 mod; 27 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\linux_s390\os_linux_s390.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\linux_s390\os_linux_s390.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\linux_s390\os_linux_s390.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\linux_s390\os_linux_s390.hpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\linux_s390\os_linux_s390.hpp-.html">Old</a>
<a href="src\hotspot\os_cpu\linux_s390\os_linux_s390.hpp.html">New</a>
<a href="src\hotspot\os_cpu\linux_s390\os_linux_s390.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\linux_s390\os_linux_s390.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\linux_s390\os_linux_s390.hpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows  </pre>
  <span class="stat">
3 lines changed; 0 ins; 3 del; 0 mod; 28 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\linux_sparc\os_linux_sparc.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\linux_sparc\os_linux_sparc.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\linux_sparc\os_linux_sparc.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\linux_sparc\os_linux_sparc.hpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\linux_sparc\os_linux_sparc.hpp-.html">Old</a>
<a href="src\hotspot\os_cpu\linux_sparc\os_linux_sparc.hpp.html">New</a>
<a href="src\hotspot\os_cpu\linux_sparc\os_linux_sparc.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\linux_sparc\os_linux_sparc.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\linux_sparc\os_linux_sparc.hpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows  </pre>
  <span class="stat">
4 lines changed; 0 ins; 4 del; 0 mod; 41 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\linux_x86\os_linux_x86.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\linux_x86\os_linux_x86.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\linux_x86\os_linux_x86.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\linux_x86\os_linux_x86.hpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\linux_x86\os_linux_x86.hpp-.html">Old</a>
<a href="src\hotspot\os_cpu\linux_x86\os_linux_x86.hpp.html">New</a>
<a href="src\hotspot\os_cpu\linux_x86\os_linux_x86.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\linux_x86\os_linux_x86.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\linux_x86\os_linux_x86.hpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows  </pre>
  <span class="stat">
4 lines changed; 0 ins; 4 del; 0 mod; 44 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\linux_zero\os_linux_zero.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\linux_zero\os_linux_zero.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\linux_zero\os_linux_zero.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\linux_zero\os_linux_zero.hpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\linux_zero\os_linux_zero.hpp-.html">Old</a>
<a href="src\hotspot\os_cpu\linux_zero\os_linux_zero.hpp.html">New</a>
<a href="src\hotspot\os_cpu\linux_zero\os_linux_zero.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\linux_zero\os_linux_zero.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\linux_zero\os_linux_zero.hpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows  </pre>
  <span class="stat">
4 lines changed; 0 ins; 4 del; 0 mod; 64 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\solaris_sparc\os_solaris_sparc.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\solaris_sparc\os_solaris_sparc.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\solaris_sparc\os_solaris_sparc.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\solaris_sparc\os_solaris_sparc.hpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\solaris_sparc\os_solaris_sparc.hpp-.html">Old</a>
<a href="src\hotspot\os_cpu\solaris_sparc\os_solaris_sparc.hpp.html">New</a>
<a href="src\hotspot\os_cpu\solaris_sparc\os_solaris_sparc.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\solaris_sparc\os_solaris_sparc.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\solaris_sparc\os_solaris_sparc.hpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows  </pre>
  <span class="stat">
4 lines changed; 0 ins; 4 del; 0 mod; 41 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\solaris_x86\os_solaris_x86.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\solaris_x86\os_solaris_x86.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\solaris_x86\os_solaris_x86.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\solaris_x86\os_solaris_x86.hpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\solaris_x86\os_solaris_x86.hpp-.html">Old</a>
<a href="src\hotspot\os_cpu\solaris_x86\os_solaris_x86.hpp.html">New</a>
<a href="src\hotspot\os_cpu\solaris_x86\os_solaris_x86.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\solaris_x86\os_solaris_x86.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\solaris_x86\os_solaris_x86.hpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows  </pre>
  <span class="stat">
4 lines changed; 0 ins; 4 del; 0 mod; 49 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\hotspot\os_cpu\windows_aarch64\assembler_windows_aarch64.cpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_aarch64\assembler_windows_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_aarch64\assembler_windows_aarch64.cpp">Raw</a>
  </code>
  <span class="file-added">src\hotspot\os_cpu\windows_aarch64\assembler_windows_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
c881b2e8: makefile ad file LIR files all with compilation issues. Added comments
a9ad5b8a: added the windows_arch64 based on linux_aarch64 and windows_x86  </pre>
  <span class="stat">
30 lines changed; 30 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\hotspot\os_cpu\windows_aarch64\atomic_windows_aarch64.hpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_aarch64\atomic_windows_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_aarch64\atomic_windows_aarch64.hpp">Raw</a>
  </code>
  <span class="file-added">src\hotspot\os_cpu\windows_aarch64\atomic_windows_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
179fec99: Fix compilation on Windows/x86_64
dab10d48: Use Atomic intrinsics straight in atomic_windows_*.hpp
c0604a70: Implement atomics with platform intrinsics
df508da7: added reference to atomic cmpxchg and others in hpp
e40ec79d: aligning declarations and definitions
9f5a64dc: changes to definitions to match mods to declaration
a9ad5b8a: added the windows_arch64 based on linux_aarch64 and windows_x86  </pre>
  <span class="stat">
102 lines changed; 102 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\hotspot\os_cpu\windows_aarch64\bytes_windows_aarch64.inline.hpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_aarch64\bytes_windows_aarch64.inline.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_aarch64\bytes_windows_aarch64.inline.hpp">Raw</a>
  </code>
  <span class="file-added">src\hotspot\os_cpu\windows_aarch64\bytes_windows_aarch64.inline.hpp</span>
<p>
<blockquote>
  <pre>
3de702bd: Use same cross-platform intrinsics for byte swapping
9f5a64dc: changes to definitions to match mods to declaration
a9ad5b8a: added the windows_arch64 based on linux_aarch64 and windows_x86  </pre>
  <span class="stat">
47 lines changed; 47 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\hotspot\os_cpu\windows_aarch64\copy_windows_aarch64.inline.hpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_aarch64\copy_windows_aarch64.inline.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_aarch64\copy_windows_aarch64.inline.hpp">Raw</a>
  </code>
  <span class="file-added">src\hotspot\os_cpu\windows_aarch64\copy_windows_aarch64.inline.hpp</span>
<p>
<blockquote>
  <pre>
a9ad5b8a: added the windows_arch64 based on linux_aarch64 and windows_x86  </pre>
  <span class="stat">
165 lines changed; 165 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\hotspot\os_cpu\windows_aarch64\globals_windows_aarch64.hpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_aarch64\globals_windows_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_aarch64\globals_windows_aarch64.hpp">Raw</a>
  </code>
  <span class="file-added">src\hotspot\os_cpu\windows_aarch64\globals_windows_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
a9ad5b8a: added the windows_arch64 based on linux_aarch64 and windows_x86  </pre>
  <span class="stat">
55 lines changed; 55 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\hotspot\os_cpu\windows_aarch64\orderAccess_windows_aarch64.hpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_aarch64\orderAccess_windows_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_aarch64\orderAccess_windows_aarch64.hpp">Raw</a>
  </code>
  <span class="file-added">src\hotspot\os_cpu\windows_aarch64\orderAccess_windows_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
32265b46: Use Inner Sharable Barriers in place of Full System Barriers
35eb5585: Fix OrderAccess barriers on Windows/ARM64
9f5a64dc: changes to definitions to match mods to declaration
a9ad5b8a: added the windows_arch64 based on linux_aarch64 and windows_x86  </pre>
  <span class="stat">
59 lines changed; 59 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\hotspot\os_cpu\windows_aarch64\os_windows_aarch64.cpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_aarch64\os_windows_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_aarch64\os_windows_aarch64.cpp">Raw</a>
  </code>
  <span class="file-added">src\hotspot\os_cpu\windows_aarch64\os_windows_aarch64.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
04f0ada2: Switch to Vectored Exception Handling on Windows
fb4009b8: Fix compilation for release configuration
697fe70a: Factor implementation of HandleExceptionFromCodeCache on Windows
7a9a16ea: Take the correct register when building the frame
61e3869a: Fix getting frame on Stack Overflow
010468d7: Refactor StubGenerator for both x86 and aarch64
c0604a70: Implement atomics with platform intrinsics
911f48ce: Merge branch 'master' of ssh.dev.azure.com:v3/ms-juniper/ARM64/openjdk-jdk
d9084f90: comment for current_sp
c871ba43: Create a single exception handling trampoline
dc2355e4: Add support for Exception Handling
a9ad5b8a: added the windows_arch64 based on linux_aarch64 and windows_x86  </pre>
  <span class="stat">
310 lines changed; 310 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\hotspot\os_cpu\windows_aarch64\os_windows_aarch64.hpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_aarch64\os_windows_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_aarch64\os_windows_aarch64.hpp">Raw</a>
  </code>
  <span class="file-added">src\hotspot\os_cpu\windows_aarch64\os_windows_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows
bd1d06dd: no rdtsc(), using hrtsc provided by Windows which does the right thing
dc2355e4: Add support for Exception Handling
df508da7: added reference to atomic cmpxchg and others in hpp
a9ad5b8a: added the windows_arch64 based on linux_aarch64 and windows_x86  </pre>
  <span class="stat">
62 lines changed; 62 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\hotspot\os_cpu\windows_aarch64\os_windows_aarch64.inline.hpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_aarch64\os_windows_aarch64.inline.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_aarch64\os_windows_aarch64.inline.hpp">Raw</a>
  </code>
  <span class="file-added">src\hotspot\os_cpu\windows_aarch64\os_windows_aarch64.inline.hpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
bd1d06dd: no rdtsc(), using hrtsc provided by Windows which does the right thing
a9ad5b8a: added the windows_arch64 based on linux_aarch64 and windows_x86  </pre>
  <span class="stat">
31 lines changed; 31 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\hotspot\os_cpu\windows_aarch64\prefetch_windows_aarch64.inline.hpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_aarch64\prefetch_windows_aarch64.inline.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_aarch64\prefetch_windows_aarch64.inline.hpp">Raw</a>
  </code>
  <span class="file-added">src\hotspot\os_cpu\windows_aarch64\prefetch_windows_aarch64.inline.hpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
a9ad5b8a: added the windows_arch64 based on linux_aarch64 and windows_x86  </pre>
  <span class="stat">
38 lines changed; 38 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\hotspot\os_cpu\windows_aarch64\thread_windows_aarch64.hpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_aarch64\thread_windows_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_aarch64\thread_windows_aarch64.hpp">Raw</a>
  </code>
  <span class="file-added">src\hotspot\os_cpu\windows_aarch64\thread_windows_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
284667da: Remove unneeded #ifdef
109aec25: More compiler related bugs. All changed with ifdefs __GNUC__ or ARM64
a9ad5b8a: added the windows_arch64 based on linux_aarch64 and windows_x86  </pre>
  <span class="stat">
83 lines changed; 83 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\hotspot\os_cpu\windows_aarch64\unwind_windows_aarch64.hpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_aarch64\unwind_windows_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_aarch64\unwind_windows_aarch64.hpp">Raw</a>
  </code>
  <span class="file-added">src\hotspot\os_cpu\windows_aarch64\unwind_windows_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
dc2355e4: Add support for Exception Handling
a9ad5b8a: added the windows_arch64 based on linux_aarch64 and windows_x86  </pre>
  <span class="stat">
102 lines changed; 102 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\hotspot\os_cpu\windows_aarch64\vmStructs_windows_aarch64.hpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_aarch64\vmStructs_windows_aarch64.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_aarch64\vmStructs_windows_aarch64.hpp">Raw</a>
  </code>
  <span class="file-added">src\hotspot\os_cpu\windows_aarch64\vmStructs_windows_aarch64.hpp</span>
<p>
<blockquote>
  <pre>
4c0f8a8e: Fix warning on double definition of OSThread::_thread_id in VMStructs
2320943e: LP64 vs LLP64 changes for common
a9ad5b8a: added the windows_arch64 based on linux_aarch64 and windows_x86  </pre>
  <span class="stat">
50 lines changed; 50 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\windows_aarch64\vm_version_windows_aarch64.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\windows_aarch64\vm_version_windows_aarch64.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\windows_aarch64\vm_version_windows_aarch64.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\windows_aarch64\vm_version_windows_aarch64.cpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\windows_aarch64\vm_version_windows_aarch64.cpp-.html">Old</a>
<a href="src\hotspot\os_cpu\linux_aarch64\vm_version_linux_aarch64.cpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_aarch64\vm_version_windows_aarch64.cpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_aarch64\vm_version_windows_aarch64.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\windows_aarch64\vm_version_windows_aarch64.cpp</span> <i>(copied from src\hotspot\os_cpu\linux_aarch64\vm_version_linux_aarch64.cpp)</i>
<p>
<blockquote>
  <pre>
a9ad5b8a: added the windows_arch64 based on linux_aarch64 and windows_x86  </pre>
  <span class="stat">
0 lines changed; 0 ins; 0 del; 0 mod; 29 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\windows_x86\atomic_windows_x86.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\windows_x86\atomic_windows_x86.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\windows_x86\atomic_windows_x86.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\windows_x86\atomic_windows_x86.hpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\windows_x86\atomic_windows_x86.hpp-.html">Old</a>
<a href="src\hotspot\os_cpu\windows_x86\atomic_windows_x86.hpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_x86\atomic_windows_x86.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_x86\atomic_windows_x86.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\windows_x86\atomic_windows_x86.hpp</span>
<p>
<blockquote>
  <pre>
179fec99: Fix compilation on Windows/x86_64
dab10d48: Use Atomic intrinsics straight in atomic_windows_*.hpp  </pre>
  <span class="stat">
125 lines changed; 16 ins; 94 del; 15 mod; 70 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\windows_x86\bytes_windows_x86.inline.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\windows_x86\bytes_windows_x86.inline.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\windows_x86\bytes_windows_x86.inline.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\windows_x86\bytes_windows_x86.inline.hpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\windows_x86\bytes_windows_x86.inline.hpp-.html">Old</a>
<a href="src\hotspot\os_cpu\windows_x86\bytes_windows_x86.inline.hpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_x86\bytes_windows_x86.inline.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_x86\bytes_windows_x86.inline.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\windows_x86\bytes_windows_x86.inline.hpp</span>
<p>
<blockquote>
  <pre>
3de702bd: Use same cross-platform intrinsics for byte swapping  </pre>
  <span class="stat">
11 lines changed; 4 ins; 4 del; 3 mod; 76 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\windows_x86\os_windows_x86.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\windows_x86\os_windows_x86.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\windows_x86\os_windows_x86.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\windows_x86\os_windows_x86.cpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\windows_x86\os_windows_x86.cpp-.html">Old</a>
<a href="src\hotspot\os_cpu\windows_x86\os_windows_x86.cpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_x86\os_windows_x86.cpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_x86\os_windows_x86.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\windows_x86\os_windows_x86.cpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows
fb4009b8: Fix compilation for release configuration
697fe70a: Factor implementation of HandleExceptionFromCodeCache on Windows
61e3869a: Fix getting frame on Stack Overflow
010468d7: Refactor StubGenerator for both x86 and aarch64  </pre>
  <span class="stat">
269 lines changed; 38 ins; 230 del; 1 mod; 216 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\os_cpu\windows_x86\os_windows_x86.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\os_cpu\windows_x86\os_windows_x86.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\os_cpu\windows_x86\os_windows_x86.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\os_cpu\windows_x86\os_windows_x86.hpp.frames.html">Frames</a>
<a href="src\hotspot\os_cpu\windows_x86\os_windows_x86.hpp-.html">Old</a>
<a href="src\hotspot\os_cpu\windows_x86\os_windows_x86.hpp.html">New</a>
<a href="src\hotspot\os_cpu\windows_x86\os_windows_x86.hpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_x86\os_windows_x86.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\os_cpu\windows_x86\os_windows_x86.hpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows  </pre>
  <span class="stat">
2 lines changed; 0 ins; 2 del; 0 mod; 69 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ <a href="src\hotspot\os_cpu\windows_x86\thread_windows_x86.cpp-.html">Old</a>
 --- <a href="src\hotspot\os_cpu\windows_x86\thread_windows_x86.cpp.patch">Patch</a>
<a href="src\hotspot\os_cpu\windows_x86\thread_windows_x86.cpp">Raw</a>
  </code>
  <span class="file-removed">src\hotspot\os_cpu\windows_x86\thread_windows_x86.cpp</span>
<p>
<blockquote>
  <pre>
2b7e5e7b: Refactor JavaThread::pd_get_top_frame  </pre>
  <span class="stat">
111 lines changed; 0 ins; 111 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\share\adlc\adlc.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\share\adlc\adlc.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\share\adlc\adlc.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\share\adlc\adlc.hpp.frames.html">Frames</a>
<a href="src\hotspot\share\adlc\adlc.hpp-.html">Old</a>
<a href="src\hotspot\share\adlc\adlc.hpp.html">New</a>
<a href="src\hotspot\share\adlc\adlc.hpp.patch">Patch</a>
<a href="src\hotspot\share\adlc\adlc.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\share\adlc\adlc.hpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
c881b2e8: makefile ad file LIR files all with compilation issues. Added comments
509c65a4: changed GensrcAdlc.gmk to include the env toolchain
781eec66: rebase on 8414f5b7554a5e52050a192d75d35d42d53cd907  </pre>
  <span class="stat">
5 lines changed; 4 ins; 1 del; 0 mod; 109 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\share\code\codeCache.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\share\code\codeCache.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\share\code\codeCache.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\share\code\codeCache.cpp.frames.html">Frames</a>
<a href="src\hotspot\share\code\codeCache.cpp-.html">Old</a>
<a href="src\hotspot\share\code\codeCache.cpp.html">New</a>
<a href="src\hotspot\share\code\codeCache.cpp.patch">Patch</a>
<a href="src\hotspot\share\code\codeCache.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\share\code\codeCache.cpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows  </pre>
  <span class="stat">
6 lines changed; 0 ins; 6 del; 0 mod; 1598 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\share\prims\jni.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\share\prims\jni.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\share\prims\jni.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\share\prims\jni.cpp.frames.html">Frames</a>
<a href="src\hotspot\share\prims\jni.cpp-.html">Old</a>
<a href="src\hotspot\share\prims\jni.cpp.html">New</a>
<a href="src\hotspot\share\prims\jni.cpp.patch">Patch</a>
<a href="src\hotspot\share\prims\jni.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\share\prims\jni.cpp</span>
<p>
<blockquote>
  <pre>
04f0ada2: Switch to Vectored Exception Handling on Windows  </pre>
  <span class="stat">
36 lines changed; 0 ins; 34 del; 2 mod; 4192 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\share\runtime\biasedLocking.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\share\runtime\biasedLocking.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\share\runtime\biasedLocking.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\share\runtime\biasedLocking.cpp.frames.html">Frames</a>
<a href="src\hotspot\share\runtime\biasedLocking.cpp-.html">Old</a>
<a href="src\hotspot\share\runtime\biasedLocking.cpp.html">New</a>
<a href="src\hotspot\share\runtime\biasedLocking.cpp.patch">Patch</a>
<a href="src\hotspot\share\runtime\biasedLocking.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\share\runtime\biasedLocking.cpp</span>
<p>
<blockquote>
  <pre>
781eec66: rebase on 8414f5b7554a5e52050a192d75d35d42d53cd907  </pre>
  <span class="stat">
7 lines changed; 1 ins; 0 del; 6 mod; 988 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\share\runtime\handshake.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\share\runtime\handshake.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\share\runtime\handshake.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\share\runtime\handshake.cpp.frames.html">Frames</a>
<a href="src\hotspot\share\runtime\handshake.cpp-.html">Old</a>
<a href="src\hotspot\share\runtime\handshake.cpp.html">New</a>
<a href="src\hotspot\share\runtime\handshake.cpp.patch">Patch</a>
<a href="src\hotspot\share\runtime\handshake.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\share\runtime\handshake.cpp</span>
<p>
<blockquote>
  <pre>
781eec66: rebase on 8414f5b7554a5e52050a192d75d35d42d53cd907  </pre>
  <span class="stat">
189 lines changed; 88 ins; 27 del; 74 mod; 280 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\share\runtime\handshake.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\share\runtime\handshake.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\share\runtime\handshake.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\share\runtime\handshake.hpp.frames.html">Frames</a>
<a href="src\hotspot\share\runtime\handshake.hpp-.html">Old</a>
<a href="src\hotspot\share\runtime\handshake.hpp.html">New</a>
<a href="src\hotspot\share\runtime\handshake.hpp.patch">Patch</a>
<a href="src\hotspot\share\runtime\handshake.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\share\runtime\handshake.hpp</span>
<p>
<blockquote>
  <pre>
781eec66: rebase on 8414f5b7554a5e52050a192d75d35d42d53cd907  </pre>
  <span class="stat">
36 lines changed; 12 ins; 4 del; 20 mod; 72 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\share\runtime\mutexLocker.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\share\runtime\mutexLocker.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\share\runtime\mutexLocker.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\share\runtime\mutexLocker.cpp.frames.html">Frames</a>
<a href="src\hotspot\share\runtime\mutexLocker.cpp-.html">Old</a>
<a href="src\hotspot\share\runtime\mutexLocker.cpp.html">New</a>
<a href="src\hotspot\share\runtime\mutexLocker.cpp.patch">Patch</a>
<a href="src\hotspot\share\runtime\mutexLocker.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\share\runtime\mutexLocker.cpp</span>
<p>
<blockquote>
  <pre>
781eec66: rebase on 8414f5b7554a5e52050a192d75d35d42d53cd907  </pre>
  <span class="stat">
2 lines changed; 0 ins; 0 del; 2 mod; 375 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\share\runtime\safepoint.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\share\runtime\safepoint.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\share\runtime\safepoint.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\share\runtime\safepoint.cpp.frames.html">Frames</a>
<a href="src\hotspot\share\runtime\safepoint.cpp-.html">Old</a>
<a href="src\hotspot\share\runtime\safepoint.cpp.html">New</a>
<a href="src\hotspot\share\runtime\safepoint.cpp.patch">Patch</a>
<a href="src\hotspot\share\runtime\safepoint.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\share\runtime\safepoint.cpp</span>
<p>
<blockquote>
  <pre>
781eec66: rebase on 8414f5b7554a5e52050a192d75d35d42d53cd907  </pre>
  <span class="stat">
4 lines changed; 0 ins; 3 del; 1 mod; 1282 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\share\runtime\safepointMechanism.inline.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\share\runtime\safepointMechanism.inline.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\share\runtime\safepointMechanism.inline.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\share\runtime\safepointMechanism.inline.hpp.frames.html">Frames</a>
<a href="src\hotspot\share\runtime\safepointMechanism.inline.hpp-.html">Old</a>
<a href="src\hotspot\share\runtime\safepointMechanism.inline.hpp.html">New</a>
<a href="src\hotspot\share\runtime\safepointMechanism.inline.hpp.patch">Patch</a>
<a href="src\hotspot\share\runtime\safepointMechanism.inline.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\share\runtime\safepointMechanism.inline.hpp</span>
<p>
<blockquote>
  <pre>
781eec66: rebase on 8414f5b7554a5e52050a192d75d35d42d53cd907  </pre>
  <span class="stat">
14 lines changed; 0 ins; 13 del; 1 mod; 67 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\share\runtime\stubRoutines.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\share\runtime\stubRoutines.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\share\runtime\stubRoutines.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\share\runtime\stubRoutines.cpp.frames.html">Frames</a>
<a href="src\hotspot\share\runtime\stubRoutines.cpp-.html">Old</a>
<a href="src\hotspot\share\runtime\stubRoutines.cpp.html">New</a>
<a href="src\hotspot\share\runtime\stubRoutines.cpp.patch">Patch</a>
<a href="src\hotspot\share\runtime\stubRoutines.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\share\runtime\stubRoutines.cpp</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
6748ed3a: added changes for cachelines and put if-defs for non-Win64 calls  </pre>
  <span class="stat">
1 lines changed; 0 ins; 0 del; 1 mod; 628 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\share\runtime\thread.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\share\runtime\thread.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\share\runtime\thread.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\share\runtime\thread.cpp.frames.html">Frames</a>
<a href="src\hotspot\share\runtime\thread.cpp-.html">Old</a>
<a href="src\hotspot\share\runtime\thread.cpp.html">New</a>
<a href="src\hotspot\share\runtime\thread.cpp.patch">Patch</a>
<a href="src\hotspot\share\runtime\thread.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\share\runtime\thread.cpp</span>
<p>
<blockquote>
  <pre>
781eec66: rebase on 8414f5b7554a5e52050a192d75d35d42d53cd907  </pre>
  <span class="stat">
1 lines changed; 1 ins; 0 del; 0 mod; 5093 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\share\runtime\thread.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\share\runtime\thread.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\share\runtime\thread.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\share\runtime\thread.hpp.frames.html">Frames</a>
<a href="src\hotspot\share\runtime\thread.hpp-.html">Old</a>
<a href="src\hotspot\share\runtime\thread.hpp.html">New</a>
<a href="src\hotspot\share\runtime\thread.hpp.patch">Patch</a>
<a href="src\hotspot\share\runtime\thread.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\share\runtime\thread.hpp</span>
<p>
<blockquote>
  <pre>
781eec66: rebase on 8414f5b7554a5e52050a192d75d35d42d53cd907  </pre>
  <span class="stat">
7 lines changed; 0 ins; 0 del; 7 mod; 2302 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\share\runtime\vmStructs.cpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\share\runtime\vmStructs.cpp.udiff.html">Udiffs</a>
<a href="src\hotspot\share\runtime\vmStructs.cpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\share\runtime\vmStructs.cpp.frames.html">Frames</a>
<a href="src\hotspot\share\runtime\vmStructs.cpp-.html">Old</a>
<a href="src\hotspot\share\runtime\vmStructs.cpp.html">New</a>
<a href="src\hotspot\share\runtime\vmStructs.cpp.patch">Patch</a>
<a href="src\hotspot\share\runtime\vmStructs.cpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\share\runtime\vmStructs.cpp</span>
<p>
<blockquote>
  <pre>
2320943e: LP64 vs LLP64 changes for common  </pre>
  <span class="stat">
4 lines changed; 3 ins; 1 del; 0 mod; 3201 unchg  </span></blockquote>

<p>
  <code>
<a href="src\hotspot\share\runtime\vm_version.hpp.cdiff.html">Cdiffs</a>
<a href="src\hotspot\share\runtime\vm_version.hpp.udiff.html">Udiffs</a>
<a href="src\hotspot\share\runtime\vm_version.hpp.sdiff.html">Sdiffs</a>
<a href="src\hotspot\share\runtime\vm_version.hpp.frames.html">Frames</a>
<a href="src\hotspot\share\runtime\vm_version.hpp-.html">Old</a>
<a href="src\hotspot\share\runtime\vm_version.hpp.html">New</a>
<a href="src\hotspot\share\runtime\vm_version.hpp.patch">Patch</a>
<a href="src\hotspot\share\runtime\vm_version.hpp">Raw</a>
  </code>
  <span class="file-modified">src\hotspot\share\runtime\vm_version.hpp</span>
<p>
<blockquote>
  <pre>
2320943e: LP64 vs LLP64 changes for common  </pre>
  <span class="stat">
2 lines changed; 2 ins; 0 del; 0 mod; 31 unchg  </span></blockquote>

<p>
  <code>
<a href="src\java.base\windows\native\libjava\java_props_md.c.cdiff.html">Cdiffs</a>
<a href="src\java.base\windows\native\libjava\java_props_md.c.udiff.html">Udiffs</a>
<a href="src\java.base\windows\native\libjava\java_props_md.c.sdiff.html">Sdiffs</a>
<a href="src\java.base\windows\native\libjava\java_props_md.c.frames.html">Frames</a>
<a href="src\java.base\windows\native\libjava\java_props_md.c-.html">Old</a>
<a href="src\java.base\windows\native\libjava\java_props_md.c.html">New</a>
<a href="src\java.base\windows\native\libjava\java_props_md.c.patch">Patch</a>
<a href="src\java.base\windows\native\libjava\java_props_md.c">Raw</a>
  </code>
  <span class="file-modified">src\java.base\windows\native\libjava\java_props_md.c</span>
<p>
<blockquote>
  <pre>
3c244241: List AArch64 as possible architecture on Windows  </pre>
  <span class="stat">
2 lines changed; 2 ins; 0 del; 0 mod; 730 unchg  </span></blockquote>

<p>
  <code>
<a href="src\java.desktop\windows\native\libawt\windows\awt_DCHolder.cpp.cdiff.html">Cdiffs</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_DCHolder.cpp.udiff.html">Udiffs</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_DCHolder.cpp.sdiff.html">Sdiffs</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_DCHolder.cpp.frames.html">Frames</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_DCHolder.cpp-.html">Old</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_DCHolder.cpp.html">New</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_DCHolder.cpp.patch">Patch</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_DCHolder.cpp">Raw</a>
  </code>
  <span class="file-modified">src\java.desktop\windows\native\libawt\windows\awt_DCHolder.cpp</span>
<p>
<blockquote>
  <pre>
c77c446c: <a href="https://bugs.openjdk.java.net/browse/JDK-8241087">8241087</a>: Build failure with VS 2019 (16.5.0) due to C2039 and C2873  </pre>
  <span class="stat">
2 lines changed; 0 ins; 1 del; 1 mod; 104 unchg  </span></blockquote>

<p>
  <code>
<a href="src\java.desktop\windows\native\libawt\windows\awt_DnDDT.cpp.cdiff.html">Cdiffs</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_DnDDT.cpp.udiff.html">Udiffs</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_DnDDT.cpp.sdiff.html">Sdiffs</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_DnDDT.cpp.frames.html">Frames</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_DnDDT.cpp-.html">Old</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_DnDDT.cpp.html">New</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_DnDDT.cpp.patch">Patch</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_DnDDT.cpp">Raw</a>
  </code>
  <span class="file-modified">src\java.desktop\windows\native\libawt\windows\awt_DnDDT.cpp</span>
<p>
<blockquote>
  <pre>
c77c446c: <a href="https://bugs.openjdk.java.net/browse/JDK-8241087">8241087</a>: Build failure with VS 2019 (16.5.0) due to C2039 and C2873  </pre>
  <span class="stat">
5 lines changed; 1 ins; 3 del; 1 mod; 1624 unchg  </span></blockquote>

<p>
  <code>
<a href="src\java.desktop\windows\native\libawt\windows\awt_ole.h.cdiff.html">Cdiffs</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_ole.h.udiff.html">Udiffs</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_ole.h.sdiff.html">Sdiffs</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_ole.h.frames.html">Frames</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_ole.h-.html">Old</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_ole.h.html">New</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_ole.h.patch">Patch</a>
<a href="src\java.desktop\windows\native\libawt\windows\awt_ole.h">Raw</a>
  </code>
  <span class="file-modified">src\java.desktop\windows\native\libawt\windows\awt_ole.h</span>
<p>
<blockquote>
  <pre>
c77c446c: <a href="https://bugs.openjdk.java.net/browse/JDK-8241087">8241087</a>: Build failure with VS 2019 (16.5.0) due to C2039 and C2873  </pre>
  <span class="stat">
3 lines changed; 1 ins; 1 del; 1 mod; 191 unchg  </span></blockquote>

<p>
  <code>
<a href="src\jdk.attach\windows\classes\sun\tools\attach\AttachProviderImpl.java.cdiff.html">Cdiffs</a>
<a href="src\jdk.attach\windows\classes\sun\tools\attach\AttachProviderImpl.java.udiff.html">Udiffs</a>
<a href="src\jdk.attach\windows\classes\sun\tools\attach\AttachProviderImpl.java.sdiff.html">Sdiffs</a>
<a href="src\jdk.attach\windows\classes\sun\tools\attach\AttachProviderImpl.java.frames.html">Frames</a>
<a href="src\jdk.attach\windows\classes\sun\tools\attach\AttachProviderImpl.java-.html">Old</a>
<a href="src\jdk.attach\windows\classes\sun\tools\attach\AttachProviderImpl.java.html">New</a>
<a href="src\jdk.attach\windows\classes\sun\tools\attach\AttachProviderImpl.java.patch">Patch</a>
<a href="src\jdk.attach\windows\classes\sun\tools\attach\AttachProviderImpl.java">Raw</a>
  </code>
  <span class="file-modified">src\jdk.attach\windows\classes\sun\tools\attach\AttachProviderImpl.java</span>
<p>
<blockquote>
  <pre>
99abcc91: Fix some test failures + Classify failures  </pre>
  <span class="stat">
1 lines changed; 0 ins; 0 del; 1 mod; 177 unchg  </span></blockquote>

<p>
  <code>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\HotSpotAgent.java.cdiff.html">Cdiffs</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\HotSpotAgent.java.udiff.html">Udiffs</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\HotSpotAgent.java.sdiff.html">Sdiffs</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\HotSpotAgent.java.frames.html">Frames</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\HotSpotAgent.java-.html">Old</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\HotSpotAgent.java.html">New</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\HotSpotAgent.java.patch">Patch</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\HotSpotAgent.java">Raw</a>
  </code>
  <span class="file-modified">src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\HotSpotAgent.java</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
99abcc91: Fix some test failures + Classify failures  </pre>
  <span class="stat">
3 lines changed; 2 ins; 0 del; 1 mod; 678 unchg  </span></blockquote>

<p>
  <code>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\asm\Disassembler.java.cdiff.html">Cdiffs</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\asm\Disassembler.java.udiff.html">Udiffs</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\asm\Disassembler.java.sdiff.html">Sdiffs</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\asm\Disassembler.java.frames.html">Frames</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\asm\Disassembler.java-.html">Old</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\asm\Disassembler.java.html">New</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\asm\Disassembler.java.patch">Patch</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\asm\Disassembler.java">Raw</a>
  </code>
  <span class="file-modified">src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\asm\Disassembler.java</span>
<p>
<blockquote>
  <pre>
99abcc91: Fix some test failures + Classify failures  </pre>
  <span class="stat">
2 lines changed; 2 ins; 0 del; 0 mod; 164 unchg  </span></blockquote>

<p>
  <code>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\WindbgDebuggerLocal.java.cdiff.html">Cdiffs</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\WindbgDebuggerLocal.java.udiff.html">Udiffs</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\WindbgDebuggerLocal.java.sdiff.html">Sdiffs</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\WindbgDebuggerLocal.java.frames.html">Frames</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\WindbgDebuggerLocal.java-.html">Old</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\WindbgDebuggerLocal.java.html">New</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\WindbgDebuggerLocal.java.patch">Patch</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\WindbgDebuggerLocal.java">Raw</a>
  </code>
  <span class="file-modified">src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\WindbgDebuggerLocal.java</span>
<p>
<blockquote>
  <pre>
b53dacf7: cleanups for upstreaming
99abcc91: Fix some test failures + Classify failures  </pre>
  <span class="stat">
5 lines changed; 4 ins; 0 del; 1 mod; 697 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\aarch64\WindbgAARCH64Thread.java.html">New</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\aarch64\WindbgAARCH64Thread.java.patch">Patch</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\aarch64\WindbgAARCH64Thread.java">Raw</a>
  </code>
  <span class="file-added">src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\aarch64\WindbgAARCH64Thread.java</span>
<p>
<blockquote>
  <pre>
99abcc91: Fix some test failures + Classify failures  </pre>
  <span class="stat">
93 lines changed; 93 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\aarch64\WindbgAARCH64ThreadContext.java.html">New</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\aarch64\WindbgAARCH64ThreadContext.java.patch">Patch</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\aarch64\WindbgAARCH64ThreadContext.java">Raw</a>
  </code>
  <span class="file-added">src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\aarch64\WindbgAARCH64ThreadContext.java</span>
<p>
<blockquote>
  <pre>
99abcc91: Fix some test failures + Classify failures  </pre>
  <span class="stat">
46 lines changed; 46 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\aarch64\WindbgAARCH64ThreadFactory.java.html">New</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\aarch64\WindbgAARCH64ThreadFactory.java.patch">Patch</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\aarch64\WindbgAARCH64ThreadFactory.java">Raw</a>
  </code>
  <span class="file-added">src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\debugger\windbg\aarch64\WindbgAARCH64ThreadFactory.java</span>
<p>
<blockquote>
  <pre>
99abcc91: Fix some test failures + Classify failures  </pre>
  <span class="stat">
44 lines changed; 44 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\runtime\Threads.java.cdiff.html">Cdiffs</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\runtime\Threads.java.udiff.html">Udiffs</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\runtime\Threads.java.sdiff.html">Sdiffs</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\runtime\Threads.java.frames.html">Frames</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\runtime\Threads.java-.html">Old</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\runtime\Threads.java.html">New</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\runtime\Threads.java.patch">Patch</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\runtime\Threads.java">Raw</a>
  </code>
  <span class="file-modified">src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\runtime\Threads.java</span>
<p>
<blockquote>
  <pre>
5b5fc3cd: More support for Windows/Arm64 in jdk.hotspot.agent  </pre>
  <span class="stat">
3 lines changed; 3 ins; 0 del; 0 mod; 267 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\runtime\win32_aarch64\Win32AARCH64JavaThreadPDAccess.java.html">New</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\runtime\win32_aarch64\Win32AARCH64JavaThreadPDAccess.java.patch">Patch</a>
<a href="src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\runtime\win32_aarch64\Win32AARCH64JavaThreadPDAccess.java">Raw</a>
  </code>
  <span class="file-added">src\jdk.hotspot.agent\share\classes\sun\jvm\hotspot\runtime\win32_aarch64\Win32AARCH64JavaThreadPDAccess.java</span>
<p>
<blockquote>
  <pre>
5b5fc3cd: More support for Windows/Arm64 in jdk.hotspot.agent  </pre>
  <span class="stat">
137 lines changed; 137 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

<p>
  <code>
<a href="src\jdk.hotspot.agent\windows\native\libsaproc\sawindbg.cpp.cdiff.html">Cdiffs</a>
<a href="src\jdk.hotspot.agent\windows\native\libsaproc\sawindbg.cpp.udiff.html">Udiffs</a>
<a href="src\jdk.hotspot.agent\windows\native\libsaproc\sawindbg.cpp.sdiff.html">Sdiffs</a>
<a href="src\jdk.hotspot.agent\windows\native\libsaproc\sawindbg.cpp.frames.html">Frames</a>
<a href="src\jdk.hotspot.agent\windows\native\libsaproc\sawindbg.cpp-.html">Old</a>
<a href="src\jdk.hotspot.agent\windows\native\libsaproc\sawindbg.cpp.html">New</a>
<a href="src\jdk.hotspot.agent\windows\native\libsaproc\sawindbg.cpp.patch">Patch</a>
<a href="src\jdk.hotspot.agent\windows\native\libsaproc\sawindbg.cpp">Raw</a>
  </code>
  <span class="file-modified">src\jdk.hotspot.agent\windows\native\libsaproc\sawindbg.cpp</span>
<p>
<blockquote>
  <pre>
025473e3: added path to adlc.exe for xc. Also added arm64 to sawindbg  </pre>
  <span class="stat">
3 lines changed; 3 ins; 0 del; 0 mod; 894 unchg  </span></blockquote>

<p>
  <code>
------ ------ ------ ------ --- <a href="test\hotspot\jtreg\runtime\handshake\HandshakeDirectTest.java.html">New</a>
<a href="test\hotspot\jtreg\runtime\handshake\HandshakeDirectTest.java.patch">Patch</a>
<a href="test\hotspot\jtreg\runtime\handshake\HandshakeDirectTest.java">Raw</a>
  </code>
  <span class="file-added">test\hotspot\jtreg\runtime\handshake\HandshakeDirectTest.java</span>
<p>
<blockquote>
  <pre>
781eec66: rebase on 8414f5b7554a5e52050a192d75d35d42d53cd907  </pre>
  <span class="stat">
130 lines changed; 130 ins; 0 del; 0 mod; 0 unchg  </span></blockquote>

    <hr />
    <p class="version">
      This code review page was prepared using <b>webrev</b> version f6b8bd88d4f7785cbe6140dc9b14167c9649d18f
    </p>
  </body>
</html>