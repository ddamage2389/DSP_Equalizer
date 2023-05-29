/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.9 and Signal Processing Toolbox 8.5.
 * Generated on: 29-May-2023 18:56:47
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 501
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\Polyspace\R2020b\extern\include\tmwtypes.h 
 */
const int BL = 501;
const real64_T B[501] = {
  -5.447453139714e-06,-5.19007724378e-07,-8.773826831611e-08,1.849229374196e-07,
  1.591111149048e-07,-2.797007541645e-07,-1.193434611748e-06,-2.568005773976e-06,
  -4.298452729425e-06,-6.186574622766e-06,-7.953602306291e-06,-9.268352361187e-06,
  -9.788866542645e-06,-9.21307055153e-06,-7.331892568752e-06,-4.076949557982e-06,
  4.453504522986e-07,5.940450757342e-06,1.193795089829e-05,1.783119531218e-05,
  2.294180421305e-05,2.660271493242e-05,2.824970537352e-05,2.750888424303e-05,
  2.426676875397e-05,1.871064905082e-05,1.133001424885e-05,2.874640009979e-06,
  -5.729032233378e-06,-1.34951474493e-05,-1.951531742718e-05,-2.309667863355e-05,
  -2.388054136417e-05,-2.192179059339e-05,-1.771301852711e-05,-1.214400673573e-05,
  -6.395924573353e-06,-1.779372193557e-06,4.651912830009e-07,-6.215221400837e-07,
  -5.525795171971e-06,-1.411931341732e-05,-2.559467787488e-05,-3.849628694823e-05,
  -5.085268021943e-05,-6.040213422722e-05,-6.488876991517e-05,-6.239378668615e-05,
  -5.165771441913e-05,-3.234642082891e-05,-5.217010738041e-06,2.785017967109e-05,
  6.397140636698e-05,9.952914370654e-05,0.0001305680470457,0.0001532737731862,
  0.0001644756183667, 0.000162105447671,0.0001455458050393,0.0001158101023036,
   7.55167545674e-05,2.864507906953e-05,-1.990944122088e-05,-6.493326389976e-05,
  -0.0001015737094097,-0.0001260091994688,-0.0001360157920053,-0.0001313425857848,
  -0.0001138292109864,-8.723037736884e-05,-5.675163969744e-05,-2.834213420477e-05,
  -7.828284863796e-06,-1.659952690333e-09,-7.789425617659e-06,-3.163396223005e-05,
  -6.918815233834e-05,-0.0001153960993633,-0.0001629795626725,-0.0002032942675125,
  -0.0002274649276697,-0.0002276611944796,-0.0001983460475184,-0.0001373188668017,
  -4.639043596842e-05,6.843394138943e-05,0.0001973279346658,0.0003275666149003,
  0.0004449136577356,0.0005353189958014,0.0005867189948243,0.0005907027963785,
  0.0005438108644336,0.0004482667082094,0.0003120075056994,0.0001479668491097,
  -2.733763191569e-05,-0.0001957605165417,-0.0003397937591287,-0.0004448494959928,
  -0.0005012497835911,-0.0005056350123568,-0.0004615665237036,-0.0003791977213438,
  -0.0002740100960957,-0.0001647404947215,-7.07460463371e-05,-9.146107301957e-06,
   7.86817307122e-06, -2.4833833856e-05,-0.0001040840279605,-0.0002183028533998,
  -0.0003486002649433,-0.0004710144636881,-0.000559648901662,-0.0005903277588221,
  -0.0005442939047163,-0.0004114371986499,-0.0001925733986822,9.960550851342e-05,
  0.0004411299682082,0.0007989224043293, 0.001134346321897, 0.001407744165352,
   0.001583415587284, 0.001634396123827, 0.001546386727883,  0.00132026300955,
  0.0009727534437532,0.0005351007202234,4.978253532686e-05,-0.0004343663893909,
  -0.0008680565258281,-0.001207728941705,-0.001421208718316,-0.001492044365971,
  -0.001421892570648,-0.001230543319727,-0.0009534830655834,-0.0006372250707152,
  -0.000332952535699,-8.927748249666e-05,5.492153787981e-05, 7.65838144144e-05,
  -2.742698396967e-05,-0.0002388663732139,-0.0005196436249244,-0.0008162932370742,
  -0.001066921368001,-0.001209799737775,-0.001192508279349,-0.0009803927217424,
  -0.0005631296075259,4.161645303901e-05,0.0007881180179297, 0.001606317463658,
   0.002409088442661, 0.003102255893876, 0.003596191783351, 0.003817529984509,
    0.00371945254149, 0.003289112174835, 0.002551066913142, 0.001566079719581,
  0.0004252225316296,-0.0007601535876898, -0.00187144457763,-0.002797228289874,
  -0.003447263163922,-0.003764183963674, -0.00373125569938,-0.003375004897062,
  -0.002762184436699,-0.001991266639389,-0.001179404345288,-0.0004464513989089,
  0.0001018997170052,0.0003895955927035,0.0003821341852211,9.311610033689e-05,
  -0.0004157152283068,-0.001041263500482,-0.001652105193898,-0.002106279394394,
  -0.002271649206644,-0.002046181073444,-0.001375361437603,-0.0002642103658165,
   0.001218055549224, 0.002941775728004, 0.004729008860308,  0.00637297963909,
   0.007662652797848, 0.008409483963401, 0.008472953641286, 0.007781474015315,
   0.006345690737515, 0.004262047862843, 0.001705651769329,-0.001087179039852,
  -0.003844925732819,-0.006292488309342,-0.008184585275637,-0.009336693173613,
  -0.009649405992442,-0.009122759088545,-0.007858209714214,-0.006047469938271,
  -0.003949068871382,-0.001855169681756,-5.256743961852e-05, 0.001217246998209,
   0.001793699435713, 0.001623454429684,0.0007734296203261,-0.0005719970483692,
  -0.002130166111999,-0.003554182771104,-0.004478295635557,-0.004569398161535,
  -0.003578338015875,-0.001384352569129, 0.001973597481766, 0.006283565437172,
    0.01116844839601,  0.01611550184408,  0.02052549587113,  0.02377694083882,
    0.02529870077131,  0.02464289774788,  0.02154949237138,  0.01599440615061,
   0.008214517611669,-0.001294816882487, -0.01181113266231, -0.02244330260285,
   -0.03221208645988, -0.04014509145214, -0.04537650115107, -0.04724099732402,
   -0.04535152373774, -0.03965193055292, -0.03043796733742, -0.01834331417009,
  -0.004291010147407,  0.01058564472805,  0.02504528891726,  0.03785377169208,
    0.04790091393195,  0.05430684917949,  0.05650699486779,  0.05430684917949,
    0.04790091393195,  0.03785377169208,  0.02504528891726,  0.01058564472805,
  -0.004291010147407, -0.01834331417009, -0.03043796733742, -0.03965193055292,
   -0.04535152373774, -0.04724099732402, -0.04537650115107, -0.04014509145214,
   -0.03221208645988, -0.02244330260285, -0.01181113266231,-0.001294816882487,
   0.008214517611669,  0.01599440615061,  0.02154949237138,  0.02464289774788,
    0.02529870077131,  0.02377694083882,  0.02052549587113,  0.01611550184408,
    0.01116844839601, 0.006283565437172, 0.001973597481766,-0.001384352569129,
  -0.003578338015875,-0.004569398161535,-0.004478295635557,-0.003554182771104,
  -0.002130166111999,-0.0005719970483692,0.0007734296203261, 0.001623454429684,
   0.001793699435713, 0.001217246998209,-5.256743961852e-05,-0.001855169681756,
  -0.003949068871382,-0.006047469938271,-0.007858209714214,-0.009122759088545,
  -0.009649405992442,-0.009336693173613,-0.008184585275637,-0.006292488309342,
  -0.003844925732819,-0.001087179039852, 0.001705651769329, 0.004262047862843,
   0.006345690737515, 0.007781474015315, 0.008472953641286, 0.008409483963401,
   0.007662652797848,  0.00637297963909, 0.004729008860308, 0.002941775728004,
   0.001218055549224,-0.0002642103658165,-0.001375361437603,-0.002046181073444,
  -0.002271649206644,-0.002106279394394,-0.001652105193898,-0.001041263500482,
  -0.0004157152283068,9.311610033689e-05,0.0003821341852211,0.0003895955927035,
  0.0001018997170052,-0.0004464513989089,-0.001179404345288,-0.001991266639389,
  -0.002762184436699,-0.003375004897062, -0.00373125569938,-0.003764183963674,
  -0.003447263163922,-0.002797228289874, -0.00187144457763,-0.0007601535876898,
  0.0004252225316296, 0.001566079719581, 0.002551066913142, 0.003289112174835,
    0.00371945254149, 0.003817529984509, 0.003596191783351, 0.003102255893876,
   0.002409088442661, 0.001606317463658,0.0007881180179297,4.161645303901e-05,
  -0.0005631296075259,-0.0009803927217424,-0.001192508279349,-0.001209799737775,
  -0.001066921368001,-0.0008162932370742,-0.0005196436249244,-0.0002388663732139,
  -2.742698396967e-05, 7.65838144144e-05,5.492153787981e-05,-8.927748249666e-05,
  -0.000332952535699,-0.0006372250707152,-0.0009534830655834,-0.001230543319727,
  -0.001421892570648,-0.001492044365971,-0.001421208718316,-0.001207728941705,
  -0.0008680565258281,-0.0004343663893909,4.978253532686e-05,0.0005351007202234,
  0.0009727534437532,  0.00132026300955, 0.001546386727883, 0.001634396123827,
   0.001583415587284, 0.001407744165352, 0.001134346321897,0.0007989224043293,
  0.0004411299682082,9.960550851342e-05,-0.0001925733986822,-0.0004114371986499,
  -0.0005442939047163,-0.0005903277588221,-0.000559648901662,-0.0004710144636881,
  -0.0003486002649433,-0.0002183028533998,-0.0001040840279605, -2.4833833856e-05,
   7.86817307122e-06,-9.146107301957e-06,-7.07460463371e-05,-0.0001647404947215,
  -0.0002740100960957,-0.0003791977213438,-0.0004615665237036,-0.0005056350123568,
  -0.0005012497835911,-0.0004448494959928,-0.0003397937591287,-0.0001957605165417,
  -2.733763191569e-05,0.0001479668491097,0.0003120075056994,0.0004482667082094,
  0.0005438108644336,0.0005907027963785,0.0005867189948243,0.0005353189958014,
  0.0004449136577356,0.0003275666149003,0.0001973279346658,6.843394138943e-05,
  -4.639043596842e-05,-0.0001373188668017,-0.0001983460475184,-0.0002276611944796,
  -0.0002274649276697,-0.0002032942675125,-0.0001629795626725,-0.0001153960993633,
  -6.918815233834e-05,-3.163396223005e-05,-7.789425617659e-06,-1.659952690333e-09,
  -7.828284863796e-06,-2.834213420477e-05,-5.675163969744e-05,-8.723037736884e-05,
  -0.0001138292109864,-0.0001313425857848,-0.0001360157920053,-0.0001260091994688,
  -0.0001015737094097,-6.493326389976e-05,-1.990944122088e-05,2.864507906953e-05,
   7.55167545674e-05,0.0001158101023036,0.0001455458050393, 0.000162105447671,
  0.0001644756183667,0.0001532737731862,0.0001305680470457,9.952914370654e-05,
  6.397140636698e-05,2.785017967109e-05,-5.217010738041e-06,-3.234642082891e-05,
  -5.165771441913e-05,-6.239378668615e-05,-6.488876991517e-05,-6.040213422722e-05,
  -5.085268021943e-05,-3.849628694823e-05,-2.559467787488e-05,-1.411931341732e-05,
  -5.525795171971e-06,-6.215221400837e-07,4.651912830009e-07,-1.779372193557e-06,
  -6.395924573353e-06,-1.214400673573e-05,-1.771301852711e-05,-2.192179059339e-05,
  -2.388054136417e-05,-2.309667863355e-05,-1.951531742718e-05,-1.34951474493e-05,
  -5.729032233378e-06,2.874640009979e-06,1.133001424885e-05,1.871064905082e-05,
  2.426676875397e-05,2.750888424303e-05,2.824970537352e-05,2.660271493242e-05,
  2.294180421305e-05,1.783119531218e-05,1.193795089829e-05,5.940450757342e-06,
  4.453504522986e-07,-4.076949557982e-06,-7.331892568752e-06,-9.21307055153e-06,
  -9.788866542645e-06,-9.268352361187e-06,-7.953602306291e-06,-6.186574622766e-06,
  -4.298452729425e-06,-2.568005773976e-06,-1.193434611748e-06,-2.797007541645e-07,
  1.591111149048e-07,1.849229374196e-07,-8.773826831611e-08,-5.19007724378e-07,
  -5.447453139714e-06
};
