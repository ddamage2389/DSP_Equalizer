/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.9 and Signal Processing Toolbox 8.5.
 * Generated on: 22-May-2023 20:49:25
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 701
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\Polyspace\R2020b\extern\include\tmwtypes.h 
 */
const int BL = 701;
const real64_T B[701] = {
  -2.268713493742e-06,-1.890113856481e-09,3.723104167427e-07,-1.412777304623e-07,
  1.659863685937e-08,-5.194469936337e-07,6.772602197522e-07,1.704156086837e-07,
  -8.068289755217e-07,3.349126396338e-07,-3.294154915257e-08,7.647820559134e-07,
  -8.973993837139e-07,-5.534800324638e-07,1.511423065439e-06,-5.962526761758e-07,
  -4.26586999481e-08,-9.537077012317e-07,1.018872217343e-06,1.243142038174e-06,
  -2.529790643078e-06,8.531254271804e-07,3.489948188787e-07,9.736483063755e-07,
  -9.60709098852e-07,-2.308583633151e-06,3.852232777701e-06,-9.577327779079e-07,
  -1.087937212565e-06,-6.937729388983e-07,6.689305408449e-07,3.761197901151e-06,
  -5.387910391567e-06,6.759902734254e-07,2.511101423813e-06,-1.817852162236e-19,
  -1.605588407127e-07,-5.517192103642e-06,6.946086322389e-06,3.049942084339e-07,
  -4.88489784833e-06,1.152486434478e-06,-4.256755065678e-07,7.367345062071e-06,
  -8.236608073975e-06,-2.344026099636e-06, 8.43245866879e-06,-2.674404943869e-06,
  7.823951677163e-07,-8.966225787786e-06,8.899526115264e-06,5.783674832645e-06,
  -1.325640965993e-05,4.276105480271e-06,-4.047422263425e-07,9.853768957514e-06,
  -8.570651203629e-06,-1.086091448959e-05,1.925320573705e-05,-5.416006469456e-06,
  -1.404176466714e-06,-9.519660980885e-06,6.983761737604e-06,1.760039045629e-05,
  -2.603657997407e-05, 5.28328860095e-06,5.478815595021e-06,7.514979611382e-06,
  -4.10145007399e-06,-2.570865226219e-05,3.289293250922e-05,-2.834405060638e-06,
  -1.26784848705e-05,-3.606086318312e-06,2.563740299752e-07,3.449513961819e-05,
  -3.879339108877e-05,-3.101634479719e-06,2.371704255901e-05,-2.046116127595e-06,
   3.72518597144e-06,-4.284998710971e-05,4.248417604168e-05, 1.36440228549e-05,
  -3.894898818585e-05,8.710901507016e-06,-6.452691977457e-06,4.930775276836e-05,
  -4.266778060259e-05,-2.961628129065e-05,5.814104137039e-05,-1.495617014661e-05,
  5.990733607001e-06,-5.221842641101e-05,3.827233941408e-05,5.126468594619e-05,
  -8.027234844157e-05,1.860580375184e-05,-3.087025640897e-19,5.003199897443e-05,
  -2.878673100765e-05,-7.798383432184e-05,0.0001034161108774,-1.682873634174e-05,
  -1.398271559551e-05,-4.168135632432e-05,1.461717719926e-05,0.0001081086837468,
  -0.0001247572497447,6.390470517541e-06, 3.81304598905e-05,2.702280500356e-05,
  2.598692141301e-06,-0.0001388394061509,  0.00014079192732,1.592450593487e-05,
  -7.381163009446e-05,-7.268182511565e-06,-1.979749164856e-05,0.0001663612582188,
  -0.0001477339611607,-5.274192620555e-05,0.0001210395606784,-1.46776053277e-05,
   3.24945476184e-05,-0.000186203937587,  0.00014212105476,0.0001054371273884,
  -0.000177978359122,3.406915626834e-05,-3.505336964971e-05,0.0001938532153814,
  -0.0001215734311488,-0.0001734786232544,0.0002406152983752,-4.445261920712e-05,
  2.125697511423e-05,-0.0001855842744915,8.561440489979e-05,0.0002538977978321,
  -0.0003027126107276,3.814182604543e-05,1.482670637112e-05,0.0001594362437651,
  -3.642409429663e-05,-0.0003410197502727,0.0003561338595579,-7.059519953463e-06,
  -7.774867341332e-05,-0.0001161985126712,-2.062777646077e-05,0.0004265823425108,
  -0.0003916002668214,-5.609451829748e-05,0.0001694743015794,6.024078548272e-05,
  7.682828003311e-05,-0.0005003376133884,0.0003998721660342,0.0001564545994966,
  -0.0002882454576529,-4.201852255841e-18,-0.0001204825175515, 0.000551171770662,
  -0.0003732759733133,-0.000295552336066,0.0004277197741488,-5.205372905401e-05,
  0.0001378733406449, -0.00056870128342,0.0003074174814279, 0.000470058130613,
  -0.000576605531538,8.010820130741e-05,-0.0001148242928661, 0.000545212120925,
  -0.0002028505979616,-0.0006709549720139, 0.000718983497991,-6.641863458221e-05,
  3.877213728098e-05,-0.0004777198110008,6.642085544659e-05,0.0008833905285145,
  -0.0008354418908635,-6.605111513415e-06,9.885001628153e-05,0.0003698550409012,
  8.801184064623e-05,-0.001087403377084,0.0009050502314265,0.0001537924641776,
  -0.0003002142331004,-0.0002332385275009,-0.0002397370392667, 0.001259626635983,
  -0.0009080716484805,-0.0003843642285009,0.0005590487332128, 8.80129520563e-05,
  0.0003624316575113,-0.001375944000146,0.0008291765789256,0.0006992188361133,
  -0.0008593295886909,3.774307072337e-05,-0.0004265359184765, 0.001414923053582,
  -0.0006607937150932,-0.001088789228683, 0.001175075507565,-0.0001098829644352,
  0.0004026736878866, -0.00136169856111,0.0004061382374656, 0.001531912446138,
  -0.001471518498454,9.134893346949e-05,-0.0002658506921352, 0.001211847688082,
  -8.141319640796e-05,-0.001996094451285, 0.001707776463643,5.356252853604e-05,
  5.507006878105e-18,-0.0009747136070623,-0.0002832972629589, 0.002439426584459,
  -0.001840962989093,-0.0003541992703661,0.0003976846798086,0.0006756141586794,
  0.0006448271406765,-0.002814226161458, 0.001831456844575,0.0008283600608021,
  -0.0009132559681195,-0.0003564314267331,-0.0009496367975546, 0.003072251386234,
  -0.001648847703275,-0.001477573179147, 0.001513977370999,7.421936151391e-05,
   0.001138422886954,-0.003171108118659, 0.001277907146661, 0.002283555975318,
   -0.00214826285675,0.0001023189047035,-0.001152368512182, 0.003081257124703,
  -0.0007238355541775,-0.003206517454377, 0.002747922331374,-9.836545672857e-05,
  0.0009405211264861,-0.002792880920259,1.603033370169e-05, 0.004185822786357,
   -0.00323278632937,-0.0001598734787396,-0.0004675758796258, 0.002321812002124,
  0.0007902766672331, -0.00514330899347, 0.003517482655004, 0.000737104595753,
  -0.0002787891049628,-0.001713785168761,-0.001614953323365, 0.005989249379682,
  -0.003519831462287,-0.001680861578825, 0.001281899406598, 0.001046473200758,
   0.002356604665501,-0.006630648393908, 0.003170055409305, 0.003014433415562,
    -0.0024921523479,-0.0004291086117777,-0.002898659497399, 0.006981257311361,
  -0.002419809003372,-0.004731878404062, 0.003825660277758,2.183900749103e-18,
   0.003117211491736,-0.006972491977992, 0.001249949736335, 0.006796132931425,
  -0.005165529941879,7.703287490091e-05,-0.002889429576452, 0.006564375521598,
  0.0003239760493366,-0.009141108160985, 0.006365196884585,0.0003847922545055,
   0.002100760908978, -0.00575581706558, -0.00224937340249,  0.01167861045695,
  -0.007252249308131,-0.001597647292767,-0.0006482522951676, 0.004594152369463,
   0.004437898448078, -0.01431119225683, 0.007629428119177, 0.003814354882311,
  -0.001564529533238,  -0.0031853706196,-0.006770554397304,  0.01695335340296,
  -0.007265642437239,-0.007374124633044, 0.004650328840647, 0.001710251173034,
   0.009106281883494, -0.01956809829332, 0.005859276932197,  0.01282542896017,
  -0.008803195763916,-0.0004629401791314, -0.01129331517885,  0.02224217973333,
  -0.002920179505737, -0.02127635917323,  0.01448649378012,-2.927584616008e-05,
    0.01318221771382, -0.02539256099601, -0.00264001284495,  0.03560037649295,
    -0.0231003914599,-0.001469455209213, -0.01463926957731,  0.03060638769041,
    0.01442315928402, -0.06647041448103,   0.0406245172853, 0.009885386708728,
    0.01555879148835, -0.04745186399594, -0.05773539507148,   0.2107580403782,
    -0.1466418543415,  -0.1446528676565,   0.3174614002457,  -0.1446528676565,
    -0.1466418543415,   0.2107580403782, -0.05773539507148, -0.04745186399594,
    0.01555879148835, 0.009885386708728,   0.0406245172853, -0.06647041448103,
    0.01442315928402,  0.03060638769041, -0.01463926957731,-0.001469455209213,
    -0.0231003914599,  0.03560037649295, -0.00264001284495, -0.02539256099601,
    0.01318221771382,-2.927584616008e-05,  0.01448649378012, -0.02127635917323,
  -0.002920179505737,  0.02224217973333, -0.01129331517885,-0.0004629401791314,
  -0.008803195763916,  0.01282542896017, 0.005859276932197, -0.01956809829332,
   0.009106281883494, 0.001710251173034, 0.004650328840647,-0.007374124633044,
  -0.007265642437239,  0.01695335340296,-0.006770554397304,  -0.0031853706196,
  -0.001564529533238, 0.003814354882311, 0.007629428119177, -0.01431119225683,
   0.004437898448078, 0.004594152369463,-0.0006482522951676,-0.001597647292767,
  -0.007252249308131,  0.01167861045695, -0.00224937340249, -0.00575581706558,
   0.002100760908978,0.0003847922545055, 0.006365196884585,-0.009141108160985,
  0.0003239760493366, 0.006564375521598,-0.002889429576452,7.703287490091e-05,
  -0.005165529941879, 0.006796132931425, 0.001249949736335,-0.006972491977992,
   0.003117211491736,2.183900749103e-18, 0.003825660277758,-0.004731878404062,
  -0.002419809003372, 0.006981257311361,-0.002898659497399,-0.0004291086117777,
    -0.0024921523479, 0.003014433415562, 0.003170055409305,-0.006630648393908,
   0.002356604665501, 0.001046473200758, 0.001281899406598,-0.001680861578825,
  -0.003519831462287, 0.005989249379682,-0.001614953323365,-0.001713785168761,
  -0.0002787891049628, 0.000737104595753, 0.003517482655004, -0.00514330899347,
  0.0007902766672331, 0.002321812002124,-0.0004675758796258,-0.0001598734787396,
   -0.00323278632937, 0.004185822786357,1.603033370169e-05,-0.002792880920259,
  0.0009405211264861,-9.836545672857e-05, 0.002747922331374,-0.003206517454377,
  -0.0007238355541775, 0.003081257124703,-0.001152368512182,0.0001023189047035,
   -0.00214826285675, 0.002283555975318, 0.001277907146661,-0.003171108118659,
   0.001138422886954,7.421936151391e-05, 0.001513977370999,-0.001477573179147,
  -0.001648847703275, 0.003072251386234,-0.0009496367975546,-0.0003564314267331,
  -0.0009132559681195,0.0008283600608021, 0.001831456844575,-0.002814226161458,
  0.0006448271406765,0.0006756141586794,0.0003976846798086,-0.0003541992703661,
  -0.001840962989093, 0.002439426584459,-0.0002832972629589,-0.0009747136070623,
  5.507006878105e-18,5.356252853604e-05, 0.001707776463643,-0.001996094451285,
  -8.141319640796e-05, 0.001211847688082,-0.0002658506921352,9.134893346949e-05,
  -0.001471518498454, 0.001531912446138,0.0004061382374656, -0.00136169856111,
  0.0004026736878866,-0.0001098829644352, 0.001175075507565,-0.001088789228683,
  -0.0006607937150932, 0.001414923053582,-0.0004265359184765,3.774307072337e-05,
  -0.0008593295886909,0.0006992188361133,0.0008291765789256,-0.001375944000146,
  0.0003624316575113, 8.80129520563e-05,0.0005590487332128,-0.0003843642285009,
  -0.0009080716484805, 0.001259626635983,-0.0002397370392667,-0.0002332385275009,
  -0.0003002142331004,0.0001537924641776,0.0009050502314265,-0.001087403377084,
  8.801184064623e-05,0.0003698550409012,9.885001628153e-05,-6.605111513415e-06,
  -0.0008354418908635,0.0008833905285145,6.642085544659e-05,-0.0004777198110008,
  3.877213728098e-05,-6.641863458221e-05, 0.000718983497991,-0.0006709549720139,
  -0.0002028505979616, 0.000545212120925,-0.0001148242928661,8.010820130741e-05,
  -0.000576605531538, 0.000470058130613,0.0003074174814279, -0.00056870128342,
  0.0001378733406449,-5.205372905401e-05,0.0004277197741488,-0.000295552336066,
  -0.0003732759733133, 0.000551171770662,-0.0001204825175515,-4.201852255841e-18,
  -0.0002882454576529,0.0001564545994966,0.0003998721660342,-0.0005003376133884,
  7.682828003311e-05,6.024078548272e-05,0.0001694743015794,-5.609451829748e-05,
  -0.0003916002668214,0.0004265823425108,-2.062777646077e-05,-0.0001161985126712,
  -7.774867341332e-05,-7.059519953463e-06,0.0003561338595579,-0.0003410197502727,
  -3.642409429663e-05,0.0001594362437651,1.482670637112e-05,3.814182604543e-05,
  -0.0003027126107276,0.0002538977978321,8.561440489979e-05,-0.0001855842744915,
  2.125697511423e-05,-4.445261920712e-05,0.0002406152983752,-0.0001734786232544,
  -0.0001215734311488,0.0001938532153814,-3.505336964971e-05,3.406915626834e-05,
  -0.000177978359122,0.0001054371273884,  0.00014212105476,-0.000186203937587,
   3.24945476184e-05,-1.46776053277e-05,0.0001210395606784,-5.274192620555e-05,
  -0.0001477339611607,0.0001663612582188,-1.979749164856e-05,-7.268182511565e-06,
  -7.381163009446e-05,1.592450593487e-05,  0.00014079192732,-0.0001388394061509,
  2.598692141301e-06,2.702280500356e-05, 3.81304598905e-05,6.390470517541e-06,
  -0.0001247572497447,0.0001081086837468,1.461717719926e-05,-4.168135632432e-05,
  -1.398271559551e-05,-1.682873634174e-05,0.0001034161108774,-7.798383432184e-05,
  -2.878673100765e-05,5.003199897443e-05,-3.087025640897e-19,1.860580375184e-05,
  -8.027234844157e-05,5.126468594619e-05,3.827233941408e-05,-5.221842641101e-05,
  5.990733607001e-06,-1.495617014661e-05,5.814104137039e-05,-2.961628129065e-05,
  -4.266778060259e-05,4.930775276836e-05,-6.452691977457e-06,8.710901507016e-06,
  -3.894898818585e-05, 1.36440228549e-05,4.248417604168e-05,-4.284998710971e-05,
   3.72518597144e-06,-2.046116127595e-06,2.371704255901e-05,-3.101634479719e-06,
  -3.879339108877e-05,3.449513961819e-05,2.563740299752e-07,-3.606086318312e-06,
  -1.26784848705e-05,-2.834405060638e-06,3.289293250922e-05,-2.570865226219e-05,
  -4.10145007399e-06,7.514979611382e-06,5.478815595021e-06, 5.28328860095e-06,
  -2.603657997407e-05,1.760039045629e-05,6.983761737604e-06,-9.519660980885e-06,
  -1.404176466714e-06,-5.416006469456e-06,1.925320573705e-05,-1.086091448959e-05,
  -8.570651203629e-06,9.853768957514e-06,-4.047422263425e-07,4.276105480271e-06,
  -1.325640965993e-05,5.783674832645e-06,8.899526115264e-06,-8.966225787786e-06,
  7.823951677163e-07,-2.674404943869e-06, 8.43245866879e-06,-2.344026099636e-06,
  -8.236608073975e-06,7.367345062071e-06,-4.256755065678e-07,1.152486434478e-06,
  -4.88489784833e-06,3.049942084339e-07,6.946086322389e-06,-5.517192103642e-06,
  -1.605588407127e-07,-1.817852162236e-19,2.511101423813e-06,6.759902734254e-07,
  -5.387910391567e-06,3.761197901151e-06,6.689305408449e-07,-6.937729388983e-07,
  -1.087937212565e-06,-9.577327779079e-07,3.852232777701e-06,-2.308583633151e-06,
  -9.60709098852e-07,9.736483063755e-07,3.489948188787e-07,8.531254271804e-07,
  -2.529790643078e-06,1.243142038174e-06,1.018872217343e-06,-9.537077012317e-07,
  -4.26586999481e-08,-5.962526761758e-07,1.511423065439e-06,-5.534800324638e-07,
  -8.973993837139e-07,7.647820559134e-07,-3.294154915257e-08,3.349126396338e-07,
  -8.068289755217e-07,1.704156086837e-07,6.772602197522e-07,-5.194469936337e-07,
  1.659863685937e-08,-1.412777304623e-07,3.723104167427e-07,-1.890113856481e-09,
  -2.268713493742e-06
};