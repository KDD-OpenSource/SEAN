#include "ad.h"

float anomalies0(const std::vector<float>& sample) {    

    float score=-0.080152*sample[232] + 0.106711*sample[173] + 0.083785*sample[410] + 0.000000*sample[478] + -0.008093*sample[240] + 0.053028*sample[221] + -0.061563*sample[226] + -0.061121*sample[230] + 0.191195*sample[371] + 0.000000*sample[309] + 0.444222*sample[361] + 0.794258*sample[179] + 0.984558*sample[418] + -0.023469*sample[65] + -0.023414*sample[56] + 0.808805*sample[177] + 0.035507*sample[141] + 0.040513*sample[324] + 0.000000*sample[386] + 0.000000*sample[420] + 0.011918*sample[152] + -0.021813*sample[30] + -0.000000*sample[475] + -0.000000*sample[476] + 0.083785*sample[410] + 0.045776*sample[383] + -0.057817*sample[8] + 0.102852*sample[146] + 0.199288*sample[401] + 0.049724*sample[127] + 0.090377*sample[80] + 0.045776*sample[383] + 0.230725*sample[330] + -0.011975*sample[86] + -0.000000*sample[303] + 0.000000*sample[311] + 0.000000*sample[242] + 0.040739*sample[4] + 0.166468*sample[323] + 0.403402*sample[488] + -0.000000*sample[465] + 0.000000*sample[439] + -0.000000*sample[465] + 0.210936*sample[188] + -0.004456*sample[37] + 0.034714*sample[67] + 1.000000*sample[474] + 0.578240*sample[375] + 0.057144*sample[26] + 0.266358*sample[136];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies1(const std::vector<float>& sample) {    

    float score=-0.051801*sample[444] + 0.663377*sample[334] + -0.021538*sample[357] + 0.426285*sample[326] + -0.021538*sample[357] + 0.107175*sample[54] + -0.040234*sample[422] + 0.092284*sample[129] + 0.000000*sample[297] + -0.038508*sample[76] + 0.417237*sample[470] + 0.020930*sample[395] + 0.030916*sample[207] + 0.237093*sample[130] + 0.001776*sample[448] + -0.069397*sample[6] + 0.140892*sample[494] + 0.149826*sample[375] + -0.049415*sample[437] + 0.000000*sample[300] + -0.024230*sample[405] + -0.044786*sample[138] + 0.616338*sample[336] + -0.033801*sample[447] + 0.334868*sample[489] + -0.049415*sample[29] + 0.222704*sample[210] + 0.067376*sample[290] + -0.047422*sample[373] + 0.022169*sample[152] + 0.118631*sample[90] + -0.000000*sample[473] + -0.000000*sample[298] + -0.044786*sample[138] + 0.446402*sample[230] + -0.055705*sample[418] + 0.247895*sample[131] + 0.042170*sample[458] + 0.030916*sample[207] + 0.122543*sample[188] + 0.080435*sample[7] + 0.088277*sample[78] + 0.472053*sample[349] + 0.435658*sample[335] + 0.001754*sample[1] + 0.139438*sample[21] + -0.072430*sample[30] + -0.044014*sample[33] + -0.045769*sample[432] + 0.422684*sample[251];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies2(const std::vector<float>& sample) {    

    float score=-0.040047*sample[287] + 0.563796*sample[196] + 0.188832*sample[485] + -0.000000*sample[431] + 0.072573*sample[397] + 0.049200*sample[355] + -0.013156*sample[66] + -0.000000*sample[386] + 0.036880*sample[132] + 0.163330*sample[460] + -0.033700*sample[276] + -0.000000*sample[470] + 0.199234*sample[284] + -0.000000*sample[386] + 0.003796*sample[370] + 0.072462*sample[213] + 0.109564*sample[254] + 0.000000*sample[229] + -0.020367*sample[356] + 0.336542*sample[241] + 0.072573*sample[397] + -0.003740*sample[48] + -0.019685*sample[495] + 0.000000*sample[237] + 0.060437*sample[202] + 0.168808*sample[82] + -0.026747*sample[25] + 0.068658*sample[16] + 0.000000*sample[301] + 0.008683*sample[131] + 0.167641*sample[487] + 0.273499*sample[218] + 0.041604*sample[171] + -0.001401*sample[383] + 0.196742*sample[243] + 0.000000*sample[335] + 0.109564*sample[254] + -0.019685*sample[110] + 0.004124*sample[162] + -0.023354*sample[54] + -0.040872*sample[182] + 0.043078*sample[194] + 0.079014*sample[278] + 0.056936*sample[137] + 0.288703*sample[462] + 0.000000*sample[452] + -0.001401*sample[383] + -0.007517*sample[149] + 0.027416*sample[296] + 0.480034*sample[195];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies3(const std::vector<float>& sample) {    

    float score=0.029263*sample[168] + 0.013407*sample[169] + -0.003033*sample[433] + 0.916333*sample[491] + -0.006067*sample[436] + 0.239837*sample[89] + -0.003033*sample[475] + -0.012849*sample[109] + 0.000000*sample[258] + -0.005402*sample[219] + 0.013056*sample[170] + -0.000000*sample[249] + -0.036064*sample[284] + 0.011321*sample[28] + -0.000000*sample[483] + 0.095673*sample[72] + 0.004691*sample[14] + 0.004691*sample[14] + -0.003033*sample[393] + -0.023741*sample[459] + -0.001212*sample[289] + -0.000733*sample[36] + 0.011798*sample[147] + 0.072330*sample[5] + 0.031449*sample[353] + 0.456079*sample[489] + -0.014221*sample[474] + 0.011518*sample[404] + 0.047862*sample[1] + 0.044596*sample[497] + -0.008107*sample[360] + 0.006878*sample[345] + 0.001963*sample[370] + 0.000000*sample[472] + 0.456079*sample[489] + -0.006067*sample[436] + 0.000000*sample[37] + 0.022946*sample[174] + -0.003033*sample[393] + 0.036823*sample[323] + 0.015694*sample[97] + 0.000000*sample[299] + 0.001963*sample[370] + 0.013056*sample[153] + 0.010406*sample[154] + 0.013924*sample[232] + 0.000000*sample[307] + 0.011798*sample[42] + 0.033367*sample[357] + -0.000168*sample[411];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies4(const std::vector<float>& sample) {    

    float score=0.024359*sample[165] + -0.040561*sample[200] + 0.080912*sample[186] + 0.020478*sample[17] + -0.000768*sample[394] + 0.000000*sample[295] + 0.367561*sample[30] + 0.603487*sample[442] + 0.637565*sample[445] + -0.000000*sample[229] + 0.000000*sample[260] + -0.000000*sample[245] + 0.000000*sample[306] + 0.019680*sample[163] + 0.020775*sample[172] + 0.021210*sample[275] + 0.293582*sample[227] + 0.000000*sample[453] + -0.016111*sample[138] + -0.004728*sample[57] + 0.013630*sample[114] + 0.482407*sample[46] + 0.516321*sample[449] + 0.001026*sample[495] + 0.355361*sample[341] + 0.024377*sample[281] + 0.376829*sample[105] + 0.623171*sample[443] + -0.000000*sample[308] + 0.000000*sample[390] + -0.015212*sample[47] + -0.017915*sample[156] + 0.022633*sample[129] + 0.648817*sample[448] + 0.348351*sample[236] + 0.024377*sample[281] + -0.000000*sample[301] + 0.365711*sample[267] + -0.060336*sample[39] + 0.166494*sample[216] + 0.008684*sample[403] + -0.022825*sample[204] + 0.304102*sample[459] + 0.111049*sample[29] + 0.376829*sample[330] + 0.178947*sample[79] + 0.381557*sample[329] + 0.000000*sample[305] + 0.264203*sample[34] + 0.304102*sample[459];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies5(const std::vector<float>& sample) {    

    float score=-0.008299*sample[429] + -0.004410*sample[286] + 0.003432*sample[39] + -0.000000*sample[388] + 0.456734*sample[332] + 0.533289*sample[492] + -0.003580*sample[313] + -0.008915*sample[499] + -0.001115*sample[157] + -0.004098*sample[87] + -0.001115*sample[157] + 0.002459*sample[479] + -0.003530*sample[164] + 0.003112*sample[46] + -0.000000*sample[160] + -0.008820*sample[392] + 0.000000*sample[440] + 0.479111*sample[329] + 0.470419*sample[323] + -0.015823*sample[37] + 0.000000*sample[306] + 0.471940*sample[265] + 0.000000*sample[367] + -0.001224*sample[80] + -0.012400*sample[480] + -0.008820*sample[435] + 0.010080*sample[253] + 0.461243*sample[330] + -0.005331*sample[498] + 0.012553*sample[328] + -0.007389*sample[424] + 0.032307*sample[278] + 0.472416*sample[326] + 0.000000*sample[53] + 0.001627*sample[179] + -0.005414*sample[65] + -0.001136*sample[252] + 0.005912*sample[38] + -0.007068*sample[462] + -0.006838*sample[118] + -0.002726*sample[411] + 0.046388*sample[322] + -0.004983*sample[17] + -0.012400*sample[287] + 0.454661*sample[331] + -0.002035*sample[84] + -0.001188*sample[283] + -0.008820*sample[433] + 0.000000*sample[469] + -0.003022*sample[138];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies6(const std::vector<float>& sample) {    

    float score=0.052281*sample[214] + 0.047173*sample[432] + -0.045101*sample[392] + 0.000000*sample[465] + 0.000000*sample[446] + 0.055902*sample[177] + 0.038816*sample[418] + 0.044451*sample[412] + 0.165946*sample[293] + 0.024267*sample[212] + 0.128596*sample[33] + -0.046774*sample[120] + 0.542776*sample[199] + 0.042225*sample[366] + 0.109849*sample[458] + 0.275546*sample[129] + 0.052867*sample[331] + -0.000000*sample[245] + -0.024754*sample[136] + 0.023275*sample[54] + 0.007632*sample[157] + 0.113200*sample[474] + -0.021020*sample[83] + 0.037439*sample[370] + 0.012957*sample[134] + -0.000000*sample[267] + 0.014606*sample[362] + -0.000000*sample[478] + 0.053876*sample[357] + 0.007632*sample[36] + 0.058312*sample[100] + 0.051466*sample[434] + 0.022707*sample[7] + 0.140370*sample[72] + 0.087126*sample[487] + 0.530351*sample[195] + -0.017479*sample[105] + 0.000000*sample[453] + -0.007495*sample[139] + 0.120119*sample[190] + 0.049503*sample[169] + 0.107708*sample[485] + -0.048847*sample[123] + 0.024267*sample[212] + 0.003433*sample[154] + 0.000000*sample[441] + 0.000000*sample[438] + 0.111141*sample[470] + 0.022780*sample[74] + 0.302606*sample[128];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies7(const std::vector<float>& sample) {    

    float score=0.058604*sample[240] + 0.030643*sample[21] + 0.000000*sample[396] + -0.014817*sample[134] + 0.000000*sample[250] + 0.024795*sample[178] + 0.000000*sample[285] + 0.009889*sample[38] + 0.036846*sample[165] + 0.033365*sample[452] + 0.208441*sample[344] + -0.025324*sample[288] + 0.252020*sample[198] + 0.017523*sample[496] + 0.032460*sample[207] + 0.000000*sample[433] + -0.014817*sample[134] + -0.194439*sample[397] + 0.066999*sample[450] + -0.014817*sample[134] + 0.308885*sample[346] + 0.020727*sample[62] + -0.027621*sample[432] + 0.366935*sample[353] + 0.166153*sample[212] + 0.032633*sample[193] + 0.044958*sample[154] + 0.043572*sample[216] + -0.000000*sample[474] + -0.028286*sample[420] + 0.058604*sample[246] + -0.025324*sample[288] + 0.425539*sample[272] + 0.021425*sample[476] + 0.253044*sample[218] + 0.032460*sample[207] + 0.147947*sample[468] + 0.071136*sample[91] + -0.061652*sample[413] + 0.000000*sample[303] + 0.408308*sample[202] + 0.000000*sample[309] + 0.001229*sample[12] + 0.315905*sample[345] + 0.071136*sample[51] + 0.030643*sample[21] + 0.224758*sample[257] + 0.005524*sample[77] + -0.028286*sample[386] + 0.018487*sample[167];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies8(const std::vector<float>& sample) {    

    float score=0.027469*sample[373] + 0.210764*sample[326] + 0.031190*sample[464] + 0.031993*sample[141] + 0.000000*sample[310] + 0.456431*sample[185] + 0.061264*sample[315] + 0.000000*sample[478] + 0.063442*sample[487] + 0.026036*sample[93] + 0.375825*sample[338] + 0.047510*sample[237] + -0.001212*sample[217] + -0.006143*sample[122] + 0.924059*sample[497] + 0.023741*sample[378] + 0.075941*sample[47] + 0.000000*sample[35] + 0.047759*sample[15] + 0.044751*sample[314] + 0.013584*sample[213] + 0.346215*sample[292] + 0.014416*sample[209] + -0.000000*sample[479] + -0.004382*sample[148] + 0.250234*sample[269] + 0.000000*sample[428] + -0.013191*sample[463] + -0.017569*sample[208] + 0.031546*sample[57] + 0.020552*sample[169] + 0.004668*sample[36] + -0.050841*sample[77] + 0.075941*sample[288] + 0.000000*sample[265] + 0.515595*sample[389] + 0.000000*sample[240] + 0.180433*sample[187] + 0.940223*sample[494] + 0.885471*sample[356] + -0.003397*sample[150] + 0.718840*sample[230] + 0.000000*sample[397] + -0.029738*sample[139] + -0.000016*sample[436] + 0.441615*sample[358] + 0.015791*sample[85] + -0.013664*sample[5] + 0.043977*sample[412] + 0.014677*sample[52];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies9(const std::vector<float>& sample) {    

    float score=-0.000000*sample[433] + 0.317801*sample[218] + -0.025841*sample[46] + 0.044697*sample[313] + -0.220777*sample[318] + 0.044276*sample[276] + 0.003946*sample[458] + -0.000000*sample[453] + 0.092728*sample[448] + 0.000000*sample[303] + 0.238461*sample[35] + 0.000000*sample[295] + -0.045988*sample[383] + 0.058131*sample[64] + -0.000000*sample[457] + 0.000000*sample[440] + 0.071916*sample[134] + 0.506258*sample[235] + 0.261190*sample[436] + -0.023026*sample[370] + -0.000000*sample[273] + -0.011901*sample[54] + 0.220800*sample[329] + 0.066931*sample[66] + -0.003769*sample[347] + 0.059438*sample[172] + 0.007579*sample[281] + -0.000000*sample[60] + 0.000000*sample[398] + -0.037484*sample[494] + -0.070357*sample[442] + -0.000000*sample[306] + 0.027093*sample[133] + 0.000000*sample[398] + 0.232920*sample[129] + 0.449256*sample[489] + -0.016388*sample[82] + -0.024795*sample[410] + 0.097001*sample[323] + 0.000000*sample[305] + 0.097001*sample[333] + 0.073956*sample[138] + 0.007579*sample[281] + -0.118358*sample[188] + 0.000388*sample[363] + 0.494541*sample[490] + 0.046271*sample[163] + 0.207509*sample[17] + 0.027093*sample[133] + 0.038224*sample[486];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies10(const std::vector<float>& sample) {    

    float score=0.013192*sample[211] + 0.000000*sample[471] + 0.712038*sample[344] + 0.000000*sample[285] + 0.000000*sample[428] + 0.013192*sample[211] + -0.000000*sample[380] + -0.002816*sample[21] + 0.262482*sample[473] + 0.139791*sample[468] + 0.089309*sample[173] + 0.012368*sample[39] + 0.028590*sample[68] + 0.102636*sample[70] + 0.066365*sample[113] + 0.697946*sample[218] + 0.060174*sample[37] + 0.230632*sample[379] + 0.000000*sample[42] + 0.036320*sample[172] + 0.099709*sample[467] + 0.193879*sample[400] + 0.219759*sample[359] + -0.000000*sample[483] + 0.003231*sample[204] + 0.000000*sample[59] + 0.197604*sample[188] + 0.099709*sample[467] + 0.713877*sample[252] + 0.070867*sample[23] + 0.079144*sample[111] + 0.279043*sample[138] + 0.484321*sample[126] + 0.413513*sample[454] + 0.039037*sample[99] + -0.039775*sample[96] + 0.000000*sample[405] + 0.083393*sample[8] + 0.671983*sample[345] + 0.002613*sample[206] + 0.686573*sample[219] + 0.125951*sample[197] + 0.302054*sample[95] + 0.055706*sample[165] + 0.684452*sample[251] + 0.129080*sample[11] + -0.083329*sample[76] + 0.099721*sample[450] + 0.172974*sample[374] + -0.002816*sample[21];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies11(const std::vector<float>& sample) {    

    float score=0.000000*sample[400] + 0.068384*sample[348] + 0.060000*sample[41] + -0.037476*sample[459] + -0.081432*sample[421] + 0.031068*sample[95] + -0.020870*sample[206] + 0.000000*sample[159] + 0.277822*sample[192] + -0.021517*sample[406] + -0.000000*sample[299] + -0.009713*sample[325] + -0.024946*sample[112] + -0.103324*sample[99] + 0.047879*sample[164] + -0.008934*sample[321] + -0.072293*sample[487] + -0.029462*sample[156] + 0.000000*sample[388] + -0.009672*sample[180] + 0.121284*sample[170] + 0.093517*sample[346] + 0.026735*sample[356] + -0.009713*sample[223] + -0.165078*sample[240] + 0.026735*sample[356] + -0.004606*sample[97] + -0.128206*sample[201] + 0.000000*sample[301] + -0.099193*sample[211] + -0.000000*sample[58] + -0.015652*sample[244] + 0.000000*sample[234] + -0.014265*sample[190] + 0.124783*sample[374] + -0.023392*sample[107] + 0.000000*sample[365] + 0.597395*sample[195] + -0.029462*sample[156] + -0.007053*sample[312] + -0.037872*sample[150] + 0.037753*sample[105] + 0.159193*sample[497] + -0.020870*sample[206] + 0.009855*sample[315] + 0.035326*sample[357] + 0.000000*sample[253] + -0.034410*sample[430] + 0.100177*sample[345] + 0.053084*sample[77];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies12(const std::vector<float>& sample) {    

    float score=0.043890*sample[250] + -0.075243*sample[422] + 0.232607*sample[39] + 0.104616*sample[167] + -0.014961*sample[470] + 0.051675*sample[146] + 0.623460*sample[344] + 0.418995*sample[349] + 0.033879*sample[22] + -0.000000*sample[60] + 0.322805*sample[192] + 0.021641*sample[48] + 0.045983*sample[418] + 0.047015*sample[173] + 0.045321*sample[276] + -0.047470*sample[135] + -0.038477*sample[217] + 0.000334*sample[197] + -0.014961*sample[364] + 0.000000*sample[297] + 0.619201*sample[237] + 0.063663*sample[11] + -0.094560*sample[136] + 0.041867*sample[30] + 0.019969*sample[187] + -0.045030*sample[494] + -0.000000*sample[299] + 0.010353*sample[358] + 0.044450*sample[225] + 0.048396*sample[206] + 0.224459*sample[320] + -0.024873*sample[215] + 0.000000*sample[299] + 0.086913*sample[162] + -0.000000*sample[107] + 0.040984*sample[163] + 0.500096*sample[285] + 0.036128*sample[408] + -0.014961*sample[470] + 0.194536*sample[323] + 0.034698*sample[32] + 0.726434*sample[325] + 0.132729*sample[88] + 0.159427*sample[36] + 0.586289*sample[350] + 0.136115*sample[142] + 0.000000*sample[298] + 0.000000*sample[441] + 0.000000*sample[49] + -0.014961*sample[435];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies13(const std::vector<float>& sample) {    

    float score=-0.004275*sample[393] + 0.001898*sample[161] + 0.002655*sample[445] + -0.004275*sample[435] + -0.004471*sample[323] + -0.034596*sample[463] + 0.015161*sample[422] + -0.010451*sample[206] + -0.001997*sample[369] + 0.698345*sample[491] + 0.001898*sample[462] + 0.302662*sample[195] + -0.004920*sample[291] + -0.000000*sample[460] + 0.304843*sample[196] + 0.070721*sample[170] + -0.003057*sample[458] + 0.021439*sample[487] + 0.012127*sample[14] + 0.017336*sample[179] + 0.697817*sample[489] + -0.004275*sample[452] + 0.001898*sample[63] + -0.003335*sample[30] + -0.003040*sample[289] + -0.017113*sample[25] + 0.147363*sample[343] + -0.000831*sample[155] + -0.001120*sample[232] + -0.004275*sample[421] + 0.034191*sample[174] + 0.012652*sample[139] + -0.010681*sample[92] + -0.000105*sample[444] + 0.000551*sample[378] + -0.016159*sample[281] + -0.004275*sample[405] + 0.053880*sample[186] + 0.053118*sample[83] + 0.000000*sample[288] + 0.009487*sample[80] + 0.024251*sample[70] + 0.015161*sample[422] + 0.024251*sample[70] + -0.007514*sample[225] + -0.001007*sample[27] + -0.029223*sample[456] + 0.000000*sample[61] + -0.004275*sample[182] + -0.005026*sample[293];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies14(const std::vector<float>& sample) {    

    float score=0.000000*sample[51] + 0.047556*sample[322] + 0.047122*sample[125] + 0.070658*sample[403] + 0.756945*sample[85] + 0.513890*sample[33] + 0.008279*sample[178] + 0.000000*sample[377] + -0.097285*sample[247] + -0.066463*sample[449] + 0.023746*sample[466] + 0.027781*sample[409] + 0.013890*sample[428] + 0.027781*sample[155] + 0.027781*sample[395] + 0.220438*sample[493] + 0.000000*sample[467] + 0.285654*sample[52] + 0.000000*sample[159] + 0.125066*sample[340] + 0.012347*sample[468] + 0.027781*sample[123] + 0.010699*sample[451] + 0.228237*sample[143] + 0.085408*sample[133] + 0.000000*sample[475] + 0.186951*sample[241] + 0.027781*sample[252] + -0.015552*sample[373] + 0.265015*sample[38] + -0.009581*sample[205] + 0.008279*sample[178] + 0.862829*sample[324] + 0.013890*sample[388] + 0.023284*sample[124] + -0.003486*sample[25] + 0.033671*sample[187] + 0.027781*sample[427] + 0.027781*sample[404] + -0.097285*sample[267] + 0.000000*sample[319] + 0.024694*sample[188] + -0.012347*sample[387] + 0.972219*sample[192] + 0.027781*sample[333] + 0.027781*sample[481] + 0.012104*sample[17] + 0.351854*sample[82] + -0.144841*sample[257] + -0.041357*sample[291];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies15(const std::vector<float>& sample) {    

    float score=0.018721*sample[8] + 0.545689*sample[29] + -0.191606*sample[52] + 0.005337*sample[356] + 0.497914*sample[199] + -0.191606*sample[52] + -0.018236*sample[340] + 0.419792*sample[156] + 0.439375*sample[164] + 0.811233*sample[102] + -0.000000*sample[59] + 0.018721*sample[8] + 0.000000*sample[160] + 1.000000*sample[365] + 0.078046*sample[246] + 0.000000*sample[300] + 1.000000*sample[318] + 0.528082*sample[476] + 1.000000*sample[96] + 0.092635*sample[248] + 0.606809*sample[378] + 0.091146*sample[289] + -0.000000*sample[369] + 0.522014*sample[76] + 0.000000*sample[298] + 0.110871*sample[252] + 0.538544*sample[152] + -0.050444*sample[238] + 0.000000*sample[60] + -0.018236*sample[332] + 0.427235*sample[291] + 0.938366*sample[480] + 0.586148*sample[45] + 0.528082*sample[21] + 0.181342*sample[394] + -0.000000*sample[297] + 0.056163*sample[371] + 0.061634*sample[357] + -0.000000*sample[481] + 0.117869*sample[418] + 0.419097*sample[184] + -0.018236*sample[332] + 0.272195*sample[379] + 0.181342*sample[394] + -0.163524*sample[236] + 0.943837*sample[202] + 0.411543*sample[69] + 0.764041*sample[107] + 0.018721*sample[8] + 0.139575*sample[196];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies16(const std::vector<float>& sample) {    

    float score=0.000000*sample[457] + 0.027395*sample[344] + 0.140972*sample[274] + 0.018181*sample[32] + 0.023361*sample[157] + -0.000000*sample[460] + -0.030712*sample[335] + -0.049423*sample[84] + 0.029533*sample[402] + 0.001655*sample[281] + 0.168641*sample[369] + 0.948165*sample[128] + -0.000000*sample[405] + 0.001061*sample[340] + 0.000000*sample[295] + -0.097948*sample[56] + 0.066906*sample[191] + 0.000000*sample[298] + -0.052554*sample[411] + 0.051835*sample[421] + 0.029533*sample[420] + 0.018382*sample[434] + -0.004341*sample[338] + -0.005202*sample[74] + 0.023336*sample[207] + -0.000000*sample[53] + -0.018596*sample[256] + -0.000177*sample[259] + 0.139267*sample[199] + -0.000000*sample[266] + -0.013785*sample[140] + 0.047252*sample[169] + 0.000000*sample[391] + -0.001202*sample[148] + 0.009668*sample[190] + 0.031830*sample[82] + 0.026415*sample[379] + 0.165093*sample[458] + 0.000784*sample[27] + -0.019076*sample[139] + -0.000194*sample[465] + 0.102043*sample[210] + 0.193036*sample[118] + 0.020199*sample[498] + -0.021910*sample[172] + 0.000000*sample[372] + 0.171823*sample[99] + 0.000000*sample[393] + 0.872215*sample[129] + 0.000000*sample[306];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies17(const std::vector<float>& sample) {    

    float score=0.388863*sample[388] + 0.040319*sample[74] + 0.060270*sample[276] + -0.000000*sample[461] + 0.172659*sample[214] + 0.212831*sample[184] + 0.174271*sample[105] + 0.084998*sample[145] + -0.001798*sample[56] + 0.352537*sample[233] + 0.256103*sample[353] + -0.000000*sample[309] + 0.275563*sample[181] + 0.022550*sample[43] + -0.000802*sample[113] + 0.000000*sample[396] + 0.007645*sample[9] + 0.151448*sample[488] + 0.371900*sample[212] + 0.031419*sample[163] + 0.009787*sample[440] + -0.020219*sample[12] + 0.005846*sample[21] + -0.000000*sample[397] + 0.124187*sample[449] + 0.352537*sample[273] + 0.053366*sample[114] + 0.056149*sample[139] + -0.286229*sample[494] + 0.006148*sample[317] + 0.069628*sample[26] + -0.000184*sample[194] + 0.126532*sample[37] + 0.000000*sample[386] + 0.048769*sample[140] + 0.029578*sample[360] + -0.034315*sample[284] + -0.000000*sample[301] + 0.342750*sample[320] + 0.084055*sample[445] + 0.000000*sample[307] + 0.121465*sample[86] + 0.032521*sample[362] + 0.157362*sample[358] + 0.143521*sample[216] + 0.000000*sample[377] + 0.060270*sample[276] + -0.021501*sample[13] + 0.010809*sample[164] + -0.041040*sample[125];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies18(const std::vector<float>& sample) {    

    float score=-0.022782*sample[485] + -0.000000*sample[389] + 0.031566*sample[499] + 0.031566*sample[499] + 0.068469*sample[148] + 0.057736*sample[58] + 0.000000*sample[260] + 0.063749*sample[3] + 0.645572*sample[369] + 0.090693*sample[251] + 0.060669*sample[19] + 0.191106*sample[30] + -0.013860*sample[294] + 0.017824*sample[490] + 0.451506*sample[390] + 0.008064*sample[286] + 0.194422*sample[186] + 0.090527*sample[113] + 0.033747*sample[87] + -0.000000*sample[394] + 0.030342*sample[160] + -0.107605*sample[40] + 0.927736*sample[364] + 0.096988*sample[130] + 0.033927*sample[283] + 0.378015*sample[46] + 0.901914*sample[443] + 0.268520*sample[69] + 0.264738*sample[97] + 0.050597*sample[166] + 0.028868*sample[55] + -0.089282*sample[57] + 0.909473*sample[393] + 0.905813*sample[445] + 0.032673*sample[157] + -0.045500*sample[76] + -0.004894*sample[110] + 0.316952*sample[155] + -0.015491*sample[34] + 0.033747*sample[87] + 0.000000*sample[469] + 0.000000*sample[300] + 0.028868*sample[55] + 0.451506*sample[429] + 0.464067*sample[376] + -0.004455*sample[153] + 0.278357*sample[370] + -0.006973*sample[355] + 0.028774*sample[262] + 0.681545*sample[446];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies19(const std::vector<float>& sample) {    

    float score=-0.015581*sample[373] + -0.076800*sample[361] + 0.078658*sample[409] + -0.113683*sample[174] + 0.018769*sample[6] + 0.099384*sample[110] + 0.072552*sample[2] + 0.015361*sample[389] + -0.106146*sample[71] + 0.021550*sample[240] + -0.026058*sample[172] + 0.097535*sample[470] + 0.000000*sample[229] + -0.000000*sample[160] + 0.075668*sample[77] + -0.128719*sample[57] + -0.026058*sample[172] + 0.161401*sample[189] + -0.025250*sample[44] + -0.043248*sample[37] + 0.183574*sample[356] + 0.048039*sample[418] + -0.037410*sample[145] + -0.059437*sample[226] + 0.072202*sample[150] + 0.000894*sample[40] + 0.089287*sample[261] + -0.050182*sample[23] + 0.000000*sample[58] + 0.811329*sample[128] + -0.021786*sample[65] + 0.000000*sample[9] + -0.072853*sample[387] + -0.003483*sample[25] + 0.162139*sample[191] + -0.008611*sample[47] + 0.141737*sample[314] + -0.101750*sample[232] + 0.000894*sample[40] + 0.196866*sample[214] + -0.100768*sample[89] + 0.171393*sample[325] + -0.072853*sample[228] + -0.072853*sample[367] + -0.003364*sample[323] + 0.029150*sample[379] + 0.000000*sample[327] + 0.000000*sample[471] + 0.000000*sample[102] + 0.328865*sample[400];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies20(const std::vector<float>& sample) {    

    float score=-0.082002*sample[261] + 0.123913*sample[30] + 0.090704*sample[150] + -0.044221*sample[265] + 1.001691*sample[442] + -0.000000*sample[429] + 0.082253*sample[298] + 0.173806*sample[411] + 0.082253*sample[298] + -0.000000*sample[311] + -0.067516*sample[341] + 0.496092*sample[402] + -0.028564*sample[199] + 0.000000*sample[42] + 0.051294*sample[293] + 0.164463*sample[87] + 0.110547*sample[156] + -0.019924*sample[494] + -0.000000*sample[264] + 0.000000*sample[431] + 0.691807*sample[318] + 0.101631*sample[194] + 0.651387*sample[456] + -0.088575*sample[211] + -0.005320*sample[52] + -0.000000*sample[304] + 0.323030*sample[174] + 0.076682*sample[26] + 0.711964*sample[485] + -0.006723*sample[274] + 0.000000*sample[374] + 0.363204*sample[123] + -0.109989*sample[436] + 0.542137*sample[184] + 0.251938*sample[173] + 0.000000*sample[310] + 0.104669*sample[280] + -0.060594*sample[324] + -0.000000*sample[431] + 0.083945*sample[281] + 0.000000*sample[307] + -0.005193*sample[410] + 0.045179*sample[197] + 0.293356*sample[177] + 0.138638*sample[134] + -0.071908*sample[35] + -0.213037*sample[40] + 0.067848*sample[78] + 0.112831*sample[36] + 0.671718*sample[461];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies21(const std::vector<float>& sample) {    

    float score=0.040692*sample[72] + 0.000000*sample[247] + -0.000000*sample[58] + 0.000000*sample[147] + -0.000000*sample[270] + -0.060515*sample[75] + 0.098827*sample[134] + 0.042486*sample[346] + 0.065505*sample[173] + 0.505065*sample[253] + 0.351898*sample[342] + -0.235519*sample[126] + 0.249757*sample[125] + 0.004117*sample[143] + -0.040839*sample[28] + 0.156761*sample[240] + -0.020977*sample[178] + 0.041201*sample[69] + -0.074065*sample[89] + 0.260976*sample[8] + -0.010777*sample[57] + 0.260646*sample[464] + -0.067451*sample[203] + 0.810326*sample[400] + 0.032205*sample[117] + 0.000000*sample[318] + 0.061273*sample[71] + -0.074479*sample[53] + 0.305261*sample[443] + 0.371697*sample[190] + 0.261583*sample[187] + -0.049265*sample[424] + -0.035077*sample[30] + 0.101086*sample[379] + 0.040692*sample[72] + 0.311177*sample[246] + -0.000000*sample[247] + 0.336901*sample[44] + 0.341402*sample[254] + 0.048672*sample[70] + -0.020648*sample[491] + 0.026707*sample[277] + 0.027702*sample[148] + 0.502042*sample[320] + 0.093536*sample[2] + 0.348304*sample[328] + 0.484991*sample[450] + 0.189674*sample[181] + 0.000000*sample[309] + -0.022598*sample[362];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies22(const std::vector<float>& sample) {    

    float score=0.053413*sample[217] + 0.055510*sample[212] + -0.166608*sample[479] + 0.000000*sample[252] + 0.000000*sample[253] + -0.000000*sample[318] + 0.004720*sample[124] + 0.000000*sample[324] + -0.038432*sample[417] + 0.014478*sample[361] + 0.103528*sample[112] + -0.000000*sample[160] + 0.240369*sample[390] + 0.098372*sample[486] + -0.021354*sample[182] + 0.009577*sample[125] + 0.000000*sample[300] + 0.196861*sample[85] + 0.000000*sample[53] + 3.211644*sample[126] + -0.038432*sample[385] + -0.059022*sample[469] + -0.029983*sample[459] + -0.021354*sample[33] + 3.211644*sample[126] + -0.000000*sample[248] + 0.004154*sample[374] + -0.000000*sample[381] + 0.137814*sample[20] + -0.041204*sample[354] + -0.138283*sample[266] + 0.747791*sample[192] + 0.130839*sample[434] + 0.024330*sample[251] + 0.000000*sample[467] + -0.013985*sample[445] + 0.207703*sample[177] + 0.186349*sample[102] + 0.065860*sample[191] + 0.148681*sample[367] + 0.127279*sample[168] + 0.000000*sample[309] + 0.058857*sample[369] + -0.000343*sample[487] + -0.040016*sample[107] + 0.252209*sample[440] + 0.139018*sample[243] + 0.026045*sample[275] + -0.023884*sample[373] + 0.122114*sample[34];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies23(const std::vector<float>& sample) {    

    float score=0.080470*sample[244] + -0.007183*sample[379] + 0.225645*sample[488] + 0.064128*sample[23] + -0.000000*sample[242] + 0.085556*sample[79] + 0.008106*sample[154] + 0.769049*sample[339] + -0.016725*sample[493] + 0.040352*sample[191] + 0.081143*sample[63] + -0.013559*sample[288] + -0.013559*sample[288] + 0.058791*sample[165] + 0.033185*sample[170] + -0.005726*sample[226] + 0.049200*sample[163] + -0.044069*sample[372] + -0.006464*sample[188] + 0.006173*sample[144] + 0.011576*sample[184] + 0.884232*sample[340] + -0.016858*sample[354] + -0.002489*sample[199] + 0.033185*sample[170] + -0.005303*sample[451] + 0.096472*sample[318] + -0.047294*sample[459] + 0.925799*sample[224] + 0.045954*sample[78] + -0.085786*sample[365] + -0.005726*sample[267] + -0.000000*sample[253] + 0.050266*sample[408] + -0.005101*sample[176] + -0.021718*sample[189] + 0.048867*sample[356] + 0.063708*sample[81] + -0.440340*sample[292] + -0.027118*sample[287] + 0.074201*sample[200] + 0.033849*sample[89] + -0.000000*sample[438] + 0.033849*sample[389] + 0.023162*sample[135] + 0.925799*sample[223] + 0.049478*sample[75] + 0.074201*sample[136] + -0.022271*sample[201] + -0.030436*sample[375];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies24(const std::vector<float>& sample) {    

    float score=-0.064196*sample[147] + 0.359928*sample[334] + -0.006234*sample[156] + 0.000000*sample[307] + 0.092938*sample[352] + -0.044770*sample[123] + 0.294919*sample[241] + 0.100053*sample[214] + -0.108783*sample[145] + 0.008949*sample[64] + 1.391043*sample[209] + 0.014397*sample[82] + 0.000000*sample[430] + 0.111389*sample[219] + -0.006234*sample[32] + 0.153175*sample[78] + 0.138130*sample[68] + 0.138993*sample[276] + 0.332852*sample[52] + -0.172210*sample[417] + 0.014397*sample[170] + 0.847680*sample[181] + -0.151713*sample[248] + 0.859997*sample[375] + -0.086945*sample[13] + 0.119070*sample[127] + 0.123578*sample[2] + -0.000336*sample[466] + 0.087942*sample[99] + 0.006844*sample[379] + 0.000000*sample[267] + 0.042632*sample[148] + 0.028373*sample[3] + 0.004002*sample[204] + 0.060006*sample[496] + 0.304033*sample[355] + 0.144575*sample[431] + 0.000000*sample[399] + -0.000000*sample[479] + 0.854421*sample[186] + -0.000000*sample[300] + -0.000000*sample[103] + 0.071711*sample[215] + 0.124971*sample[93] + 0.000000*sample[437] + 0.014397*sample[82] + 1.000000*sample[232] + 0.152320*sample[256] + 0.014397*sample[82] + -0.338640*sample[296];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies25(const std::vector<float>& sample) {    

    float score=-0.023697*sample[90] + -0.038229*sample[34] + -0.060629*sample[468] + 0.043833*sample[121] + 0.104729*sample[314] + 0.000000*sample[231] + -0.000000*sample[263] + 0.088201*sample[313] + -0.000000*sample[297] + 0.333246*sample[224] + 0.022213*sample[419] + -0.000000*sample[302] + 0.116007*sample[169] + 0.000000*sample[297] + 0.077181*sample[156] + -0.000000*sample[431] + 0.264281*sample[407] + 0.125558*sample[103] + 0.222547*sample[181] + 0.078340*sample[211] + 0.272283*sample[334] + 0.053601*sample[288] + 0.276104*sample[420] + 0.170677*sample[369] + 0.072823*sample[145] + 0.329760*sample[405] + 0.104464*sample[454] + 0.126101*sample[168] + -0.011226*sample[333] + -0.075960*sample[398] + 0.223080*sample[444] + -0.017232*sample[360] + 0.066140*sample[11] + 0.000000*sample[304] + 0.104136*sample[491] + 0.075883*sample[278] + 0.029486*sample[37] + 0.081125*sample[71] + 0.360333*sample[223] + -0.059432*sample[457] + 0.301092*sample[192] + -0.015332*sample[427] + 0.110017*sample[3] + 0.070301*sample[167] + 0.161863*sample[182] + 0.048207*sample[320] + 0.119512*sample[73] + 0.119897*sample[277] + 0.272283*sample[334] + 0.035376*sample[75];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies26(const std::vector<float>& sample) {    

    float score=0.219773*sample[445] + 0.273223*sample[242] + -0.123335*sample[76] + 0.132448*sample[388] + 0.739721*sample[1] + 0.449530*sample[499] + 0.318599*sample[326] + 0.260279*sample[323] + -0.094626*sample[417] + -0.094626*sample[417] + 0.501221*sample[69] + -0.169243*sample[374] + 0.200629*sample[187] + 0.262243*sample[141] + 0.113751*sample[5] + -0.000000*sample[258] + -0.000000*sample[335] + 0.000000*sample[325] + -0.381832*sample[16] + 0.231175*sample[89] + -0.000000*sample[433] + 0.506458*sample[51] + 0.262243*sample[141] + 0.533239*sample[288] + -0.000000*sample[308] + 0.357327*sample[132] + 0.409009*sample[290] + 5.064645*sample[209] + 0.000000*sample[260] + 0.035514*sample[375] + 0.450155*sample[33] + 0.028639*sample[125] + 0.394166*sample[339] + 0.143131*sample[381] + 0.000000*sample[301] + 0.388335*sample[278] + -0.058320*sample[235] + 0.575539*sample[143] + 0.657413*sample[79] + 1.094869*sample[210] + 0.273223*sample[242] + 0.459268*sample[70] + 0.596686*sample[152] + 0.753426*sample[338] + 0.005664*sample[22] + 0.442261*sample[392] + 0.260279*sample[442] + 0.886249*sample[25] + 0.450212*sample[490] + 0.531094*sample[23];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies27(const std::vector<float>& sample) {    

    float score=0.262833*sample[52] + 0.000000*sample[249] + 0.166228*sample[147] + 0.092353*sample[10] + 0.156732*sample[22] + 0.015211*sample[200] + -0.000000*sample[257] + 0.452296*sample[337] + 1.000000*sample[242] + 0.452296*sample[329] + 0.233463*sample[431] + 0.160395*sample[278] + 0.032019*sample[199] + 0.139245*sample[403] + -0.010105*sample[37] + 0.000000*sample[422] + 1.000000*sample[256] + 0.074325*sample[167] + 0.019654*sample[29] + -0.071730*sample[389] + -0.051598*sample[25] + 0.055088*sample[38] + 0.048993*sample[8] + 0.086615*sample[141] + -0.001110*sample[93] + 0.023001*sample[206] + 0.877941*sample[246] + -0.000000*sample[478] + -0.000000*sample[233] + -0.025553*sample[47] + 0.021083*sample[465] + -0.053134*sample[444] + 0.000000*sample[453] + 0.000000*sample[328] + 0.163476*sample[354] + 0.000000*sample[471] + 0.359322*sample[446] + 0.095408*sample[421] + 0.359322*sample[365] + 0.064021*sample[486] + 0.084521*sample[129] + 0.000000*sample[304] + 0.897687*sample[345] + 0.139983*sample[13] + 0.000000*sample[91] + 0.147006*sample[70] + -0.025553*sample[433] + 0.000000*sample[422] + 0.120962*sample[113] + 0.012742*sample[400];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies28(const std::vector<float>& sample) {    

    float score=-0.000000*sample[310] + 0.000000*sample[263] + -0.000000*sample[33] + 0.000000*sample[465] + 0.000000*sample[308] + -0.000000*sample[413] + 0.000000*sample[203] + 0.000000*sample[109] + 0.000000*sample[203] + 0.000000*sample[140] + 0.000000*sample[381] + 0.000000*sample[193] + -0.000000*sample[33] + -0.000000*sample[439] + -0.000000*sample[145] + 0.000000*sample[472] + -0.000000*sample[391] + 0.000000*sample[187] + 1.000000*sample[329] + 0.000000*sample[427] + 0.000000*sample[427] + 0.000000*sample[71] + -0.000000*sample[256] + 0.000000*sample[144] + 0.000000*sample[393] + 0.000000*sample[433] + -0.000000*sample[110] + -0.000000*sample[151] + -0.000000*sample[92] + 0.000000*sample[289] + -0.000000*sample[20] + -0.000000*sample[107] + 0.000000*sample[415] + -0.000000*sample[161] + 1.000000*sample[348] + -0.000000*sample[142] + -0.000000*sample[401] + 0.000000*sample[109] + 0.000000*sample[444] + -0.000000*sample[126] + 0.000000*sample[373] + 0.000000*sample[438] + 0.000000*sample[243] + 0.000000*sample[103] + 0.000000*sample[238] + -0.000000*sample[488] + 0.000000*sample[227] + 0.000000*sample[269] + 1.000000*sample[341] + 0.000000*sample[428];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies29(const std::vector<float>& sample) {    

    float score=0.000000*sample[388] + 4.425446*sample[126] + 0.047978*sample[312] + -0.021347*sample[453] + 0.037869*sample[31] + -0.026759*sample[199] + 0.338244*sample[339] + 0.153988*sample[322] + 0.048097*sample[142] + 0.380239*sample[219] + 0.010484*sample[357] + -0.096756*sample[104] + -0.022937*sample[362] + 0.000000*sample[441] + -0.013465*sample[204] + 0.167354*sample[86] + 0.058216*sample[62] + -0.032156*sample[390] + 0.000000*sample[264] + 0.000845*sample[41] + -0.000000*sample[260] + -0.000000*sample[270] + 0.009498*sample[161] + 0.086960*sample[95] + -0.101768*sample[283] + 0.124028*sample[65] + -0.006753*sample[92] + -0.000000*sample[270] + 0.023373*sample[495] + 0.002757*sample[346] + -0.058370*sample[22] + 0.391973*sample[255] + 0.687395*sample[334] + -0.096756*sample[104] + -0.034063*sample[39] + 0.109259*sample[98] + -0.023214*sample[79] + 0.000000*sample[228] + 0.000000*sample[295] + 0.113736*sample[138] + 0.064961*sample[143] + 0.492074*sample[337] + -0.064246*sample[58] + 0.495546*sample[262] + 0.000000*sample[252] + 0.153988*sample[322] + 0.504454*sample[192] + 0.000000*sample[198] + 0.000000*sample[318] + 0.000000*sample[311];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies30(const std::vector<float>& sample) {    

    float score=0.073950*sample[404] + 0.021910*sample[461] + 0.066536*sample[226] + 0.070751*sample[176] + 0.080706*sample[181] + -0.000000*sample[259] + 0.553993*sample[236] + 0.564069*sample[321] + -0.012074*sample[7] + 0.052763*sample[40] + 0.062157*sample[203] + -0.000000*sample[426] + 0.073350*sample[39] + 0.072608*sample[106] + 0.014297*sample[107] + 0.208682*sample[192] + 0.044613*sample[398] + -0.000000*sample[229] + 0.089158*sample[101] + 0.096766*sample[210] + 0.017666*sample[384] + 0.162210*sample[221] + 0.595247*sample[499] + -0.024840*sample[241] + -0.000000*sample[295] + 0.020378*sample[25] + 0.123892*sample[488] + 0.678379*sample[33] + 0.001320*sample[134] + 0.091370*sample[405] + 0.079636*sample[36] + 0.142966*sample[52] + 0.215885*sample[339] + 0.612746*sample[347] + 0.147853*sample[374] + 0.012866*sample[214] + 0.378838*sample[338] + 0.099867*sample[182] + 0.025807*sample[356] + 0.025807*sample[356] + 0.012866*sample[214] + 0.137443*sample[136] + 0.093392*sample[20] + 0.071966*sample[63] + 0.051207*sample[293] + 0.078704*sample[401] + 0.631907*sample[159] + 0.050686*sample[141] + -0.015195*sample[215] + 0.000000*sample[263];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies31(const std::vector<float>& sample) {    

    float score=-0.038345*sample[54] + -0.025451*sample[493] + 0.081684*sample[109] + -0.005560*sample[51] + 0.256095*sample[239] + -0.092785*sample[50] + -0.027790*sample[410] + 0.018823*sample[29] + -0.020080*sample[176] + -0.000007*sample[298] + -0.000000*sample[231] + -0.011880*sample[171] + 0.046692*sample[119] + 0.126759*sample[158] + -0.013668*sample[223] + -0.087163*sample[325] + -0.209741*sample[110] + 0.004038*sample[1] + 0.040358*sample[124] + 0.076113*sample[278] + -0.000000*sample[103] + 0.000000*sample[457] + -0.005990*sample[76] + -0.029213*sample[291] + 0.094516*sample[356] + -0.016672*sample[240] + -0.030805*sample[120] + 0.125834*sample[392] + 0.052584*sample[313] + 0.395026*sample[128] + -0.013668*sample[335] + -0.000000*sample[160] + -0.011398*sample[85] + -0.006611*sample[117] + -0.013668*sample[335] + -0.015716*sample[217] + 0.076044*sample[418] + -0.041004*sample[246] + -0.005560*sample[104] + -0.008340*sample[44] + 0.621646*sample[195] + 0.035383*sample[351] + 0.142070*sample[354] + 0.148597*sample[355] + 0.149651*sample[65] + 0.094516*sample[356] + 0.000000*sample[457] + -0.052054*sample[233] + -0.004173*sample[49] + -0.016664*sample[203];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies32(const std::vector<float>& sample) {    

    float score=-0.000226*sample[14] + 0.432953*sample[226] + 0.145239*sample[463] + 0.279799*sample[330] + 0.279799*sample[330] + -0.002624*sample[77] + -0.012613*sample[55] + 0.149316*sample[374] + 0.149316*sample[239] + 0.983447*sample[224] + -0.053942*sample[28] + 0.634652*sample[236] + 0.103397*sample[78] + -0.031828*sample[423] + -0.026387*sample[135] + 0.013539*sample[362] + 0.006104*sample[346] + 0.850684*sample[321] + 0.177846*sample[154] + 0.034819*sample[214] + -0.012581*sample[186] + 0.029549*sample[32] + 0.026002*sample[406] + 0.193606*sample[225] + 0.004077*sample[418] + 0.006346*sample[382] + -0.015406*sample[171] + -0.000000*sample[265] + 0.053141*sample[97] + -0.000000*sample[106] + 0.695878*sample[324] + 0.019494*sample[19] + -0.000000*sample[160] + 0.000000*sample[106] + 0.010675*sample[383] + -0.055607*sample[360] + 0.037706*sample[215] + 1.000000*sample[266] + 0.047136*sample[371] + 0.001431*sample[133] + 0.000000*sample[260] + -0.132763*sample[454] + 0.574658*sample[247] + -0.007225*sample[496] + 0.000000*sample[319] + 0.000000*sample[439] + 0.000000*sample[250] + 0.000000*sample[103] + 0.006322*sample[356] + 0.053141*sample[97];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies33(const std::vector<float>& sample) {    

    float score=0.130280*sample[113] + -0.093187*sample[246] + 0.102068*sample[19] + 0.095344*sample[85] + 0.000000*sample[257] + 0.229230*sample[206] + 0.374484*sample[181] + -0.026935*sample[418] + 0.416991*sample[284] + 0.045833*sample[133] + -0.018946*sample[153] + -0.026935*sample[434] + -0.026935*sample[418] + 0.256988*sample[66] + 0.251824*sample[369] + 0.058199*sample[57] + 0.055199*sample[456] + -0.000000*sample[102] + 0.031884*sample[280] + -0.076985*sample[222] + -0.000000*sample[295] + 0.374484*sample[181] + -0.000000*sample[48] + 0.304903*sample[202] + -0.000000*sample[263] + 0.120752*sample[387] + -0.018133*sample[220] + -0.026935*sample[434] + -0.104904*sample[474] + 0.000000*sample[342] + 0.000000*sample[479] + -0.034273*sample[51] + 0.325043*sample[155] + 0.138679*sample[20] + -0.184151*sample[436] + 0.000000*sample[318] + 0.056076*sample[4] + 0.251824*sample[369] + -0.070477*sample[10] + 0.063032*sample[78] + 0.299604*sample[205] + 0.189512*sample[167] + -0.093187*sample[246] + -0.033944*sample[37] + 0.000000*sample[483] + -0.070308*sample[56] + 0.004659*sample[178] + 0.000000*sample[479] + 0.165751*sample[382] + 0.000000*sample[327];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies34(const std::vector<float>& sample) {    

    float score=0.021373*sample[111] + -0.068557*sample[29] + -0.008048*sample[75] + 0.006700*sample[367] + 0.000000*sample[325] + -0.116006*sample[402] + -0.000000*sample[250] + 0.572801*sample[321] + -0.000000*sample[395] + -0.027103*sample[419] + 0.009596*sample[464] + 0.135688*sample[241] + 0.059239*sample[444] + 0.105136*sample[490] + 0.534444*sample[60] + 0.000000*sample[308] + -0.041976*sample[115] + 0.393272*sample[336] + 0.085142*sample[70] + 0.008174*sample[278] + 0.071512*sample[51] + -0.040149*sample[235] + -0.011560*sample[155] + 0.032096*sample[127] + 0.152870*sample[200] + -0.000000*sample[478] + 0.062361*sample[210] + 0.166145*sample[202] + 0.781946*sample[224] + 0.000000*sample[436] + 0.146542*sample[497] + -0.000000*sample[397] + 0.114512*sample[234] + 0.049497*sample[85] + -0.000000*sample[308] + -0.000000*sample[309] + 0.023980*sample[134] + 0.000000*sample[307] + -0.010285*sample[86] + -0.094633*sample[66] + 0.012491*sample[107] + 0.398991*sample[244] + 0.114512*sample[91] + 0.256226*sample[222] + 0.090125*sample[262] + -0.008048*sample[75] + -0.031634*sample[157] + 0.006127*sample[133] + 0.059239*sample[444] + 0.060814*sample[432];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies35(const std::vector<float>& sample) {    

    float score=-0.000000*sample[266] + -0.366100*sample[247] + 1.055632*sample[209] + -0.029306*sample[405] + 0.114042*sample[18] + 0.500000*sample[398] + 0.086295*sample[403] + -0.249025*sample[47] + -0.018332*sample[98] + 0.915554*sample[177] + 0.044966*sample[461] + 0.350626*sample[357] + 0.144140*sample[139] + 0.084446*sample[423] + 0.085388*sample[17] + -0.181188*sample[264] + 0.314580*sample[138] + 0.057288*sample[336] + -0.193504*sample[465] + 0.065273*sample[171] + 0.000000*sample[9] + -0.000000*sample[271] + 0.760272*sample[262] + -0.000000*sample[420] + 0.082258*sample[488] + -0.022967*sample[411] + 0.007720*sample[30] + 0.084446*sample[430] + 0.098036*sample[64] + 0.000000*sample[272] + 0.238234*sample[496] + -0.073265*sample[107] + 0.039480*sample[68] + 0.000000*sample[311] + -0.022967*sample[411] + 0.039480*sample[68] + 0.132163*sample[142] + -0.043768*sample[424] + 0.066678*sample[67] + 1.000000*sample[421] + 0.000000*sample[160] + 0.500000*sample[398] + 0.073061*sample[153] + -0.046224*sample[141] + 0.254511*sample[454] + -0.163003*sample[240] + 0.162231*sample[203] + -0.073265*sample[107] + 0.000000*sample[311] + 0.239728*sample[348];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies36(const std::vector<float>& sample) {    

    float score=0.025095*sample[164] + 0.125186*sample[93] + -0.067140*sample[133] + 0.117038*sample[419] + 0.067400*sample[278] + 0.244068*sample[0] + -0.000000*sample[440] + 0.074767*sample[389] + -0.000000*sample[394] + 0.003706*sample[90] + 0.048095*sample[71] + -0.121186*sample[115] + 0.522512*sample[253] + 0.021853*sample[293] + 0.171576*sample[489] + -0.000000*sample[95] + 0.079590*sample[196] + -0.000000*sample[477] + -0.000000*sample[266] + 0.000302*sample[178] + 0.026258*sample[362] + 0.021853*sample[293] + 0.000000*sample[391] + 0.555813*sample[224] + 0.088303*sample[120] + 0.137502*sample[406] + -0.000000*sample[393] + 0.205245*sample[445] + 0.109995*sample[110] + 0.206801*sample[479] + 0.000595*sample[97] + 0.002064*sample[241] + 0.000000*sample[457] + 0.186916*sample[154] + 0.000000*sample[429] + 0.027732*sample[46] + 0.052408*sample[180] + 0.165821*sample[401] + -0.050093*sample[37] + 0.081995*sample[50] + 0.138778*sample[292] + 0.082212*sample[185] + 0.013437*sample[131] + 0.007616*sample[148] + 0.000000*sample[309] + 0.546763*sample[332] + 0.000000*sample[452] + 0.038027*sample[54] + 0.080419*sample[127] + 0.128128*sample[444];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies37(const std::vector<float>& sample) {    

    float score=0.007431*sample[346] + -0.013725*sample[186] + -0.012546*sample[405] + 0.007562*sample[418] + -0.000000*sample[47] + 0.141047*sample[63] + 0.007431*sample[346] + -0.003573*sample[91] + 0.097294*sample[2] + 0.000000*sample[45] + 0.865609*sample[497] + -0.008247*sample[237] + 0.032138*sample[458] + 0.060809*sample[431] + 0.022760*sample[12] + 0.065062*sample[428] + 0.040444*sample[14] + -0.003573*sample[325] + 0.027326*sample[203] + -0.033037*sample[406] + -0.014900*sample[356] + 0.040444*sample[141] + 0.842034*sample[110] + -0.010157*sample[172] + -0.005489*sample[313] + 0.007610*sample[143] + 0.002460*sample[424] + 0.467183*sample[494] + 0.003153*sample[64] + 0.027857*sample[232] + 0.009025*sample[199] + -0.000000*sample[299] + 0.467183*sample[494] + 0.004252*sample[367] + 0.017302*sample[36] + -0.000000*sample[390] + 0.040670*sample[191] + 0.045074*sample[105] + 0.000000*sample[417] + 0.005029*sample[54] + 0.049820*sample[95] + 0.000000*sample[416] + 0.070882*sample[94] + -0.062188*sample[300] + -0.008247*sample[237] + 0.010104*sample[207] + 0.196692*sample[383] + 0.000000*sample[251] + -0.001792*sample[81] + -0.005489*sample[313];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies38(const std::vector<float>& sample) {    

    float score=0.082969*sample[254] + -0.114834*sample[335] + -0.130764*sample[479] + 0.083075*sample[145] + -0.105721*sample[38] + 0.189882*sample[497] + -0.223966*sample[211] + -0.080253*sample[370] + 0.012809*sample[20] + -0.000000*sample[382] + -0.008707*sample[188] + 0.142752*sample[149] + -0.000000*sample[306] + -0.027884*sample[262] + 0.004387*sample[250] + 0.065647*sample[187] + 0.050119*sample[77] + 0.036505*sample[46] + -0.281557*sample[40] + 0.217242*sample[161] + 0.018092*sample[274] + 0.113905*sample[70] + -0.048339*sample[190] + 0.072212*sample[327] + 0.061526*sample[404] + 0.072212*sample[327] + -0.037383*sample[55] + 0.097555*sample[433] + -0.004616*sample[186] + 0.149848*sample[352] + -0.064402*sample[376] + 0.068979*sample[180] + 0.000000*sample[299] + 0.009972*sample[392] + -0.008707*sample[447] + -0.020581*sample[0] + 0.018092*sample[274] + -0.072689*sample[379] + 0.000000*sample[472] + 0.025046*sample[116] + 0.012809*sample[146] + 0.375347*sample[158] + 0.106678*sample[52] + 0.058168*sample[135] + 0.038162*sample[165] + 0.207174*sample[421] + 0.044660*sample[17] + -0.020635*sample[289] + -0.050874*sample[13] + 0.688176*sample[195];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies39(const std::vector<float>& sample) {    

    float score=0.142044*sample[125] + -0.032391*sample[95] + 0.498237*sample[224] + 0.406066*sample[254] + -0.015136*sample[239] + 0.148475*sample[450] + 0.479923*sample[246] + 0.057250*sample[127] + -0.002584*sample[282] + 0.068534*sample[68] + 0.052733*sample[270] + 0.126357*sample[177] + 0.022356*sample[163] + 0.058179*sample[495] + -0.130777*sample[247] + 0.000000*sample[265] + 0.021802*sample[93] + 0.157510*sample[138] + 0.000000*sample[242] + 0.045460*sample[15] + 0.081474*sample[429] + 0.065849*sample[419] + 0.073671*sample[164] + 0.063484*sample[401] + 0.113292*sample[188] + 0.034661*sample[135] + 0.000000*sample[263] + 0.058622*sample[26] + -0.000000*sample[308] + 0.194216*sample[352] + 0.000000*sample[175] + 0.000000*sample[60] + 0.535904*sample[350] + 0.200559*sample[137] + 0.088414*sample[280] + 0.076292*sample[387] + 0.160839*sample[441] + 0.052614*sample[291] + 0.000000*sample[439] + 0.000000*sample[266] + 0.011303*sample[346] + 0.095427*sample[213] + 0.108107*sample[485] + 0.176886*sample[435] + 0.112724*sample[286] + 0.443315*sample[244] + 0.428542*sample[170] + 0.000000*sample[310] + 0.012353*sample[80] + 0.000000*sample[255];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies40(const std::vector<float>& sample) {    

    float score=0.454101*sample[448] + 0.044695*sample[53] + 0.331709*sample[459] + 0.039209*sample[141] + 0.149231*sample[63] + 0.084013*sample[69] + 0.362105*sample[337] + 0.101343*sample[453] + 0.128975*sample[140] + 0.289530*sample[485] + -0.000000*sample[433] + 0.069778*sample[247] + 0.341312*sample[344] + 0.000000*sample[324] + 0.008064*sample[345] + 0.422745*sample[222] + 0.032214*sample[434] + 0.069778*sample[247] + 0.087775*sample[173] + 0.035461*sample[138] + 0.028638*sample[35] + 0.092664*sample[8] + 0.220914*sample[192] + 0.200768*sample[352] + 0.051811*sample[214] + -0.000000*sample[231] + 0.153895*sample[106] + 0.101343*sample[414] + 0.008585*sample[171] + 0.027066*sample[91] + 0.039679*sample[174] + -0.026627*sample[101] + 0.062258*sample[216] + 0.192589*sample[424] + 0.441649*sample[246] + 0.080907*sample[29] + 0.056628*sample[135] + 0.105074*sample[46] + 0.000000*sample[305] + 0.133259*sample[184] + 0.133259*sample[184] + 0.008585*sample[171] + 0.200826*sample[476] + 0.350058*sample[480] + 0.011330*sample[22] + 0.064743*sample[43] + 0.189460*sample[50] + 0.037004*sample[490] + 0.000000*sample[441] + -0.026627*sample[101];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies41(const std::vector<float>& sample) {    

    float score=0.085390*sample[464] + -0.174351*sample[409] + 0.061772*sample[20] + 0.091596*sample[289] + 0.372430*sample[339] + 0.075236*sample[173] + 0.158719*sample[374] + 0.025907*sample[81] + 0.122315*sample[320] + 0.046386*sample[121] + 0.012908*sample[274] + 0.091494*sample[376] + 0.257882*sample[326] + 0.058237*sample[107] + 0.025907*sample[81] + 0.122315*sample[320] + 0.105249*sample[183] + 0.471290*sample[234] + 0.189244*sample[359] + 0.009040*sample[18] + 0.071144*sample[410] + 0.278696*sample[489] + -0.014326*sample[105] + 0.193259*sample[257] + 0.263499*sample[449] + 0.110539*sample[49] + 0.000000*sample[295] + 0.388807*sample[344] + 0.201691*sample[383] + -0.000000*sample[380] + 0.075747*sample[488] + 0.000000*sample[380] + -0.028809*sample[25] + 0.228025*sample[336] + 0.111314*sample[447] + -0.087175*sample[308] + 0.366945*sample[239] + 0.193259*sample[257] + 0.122315*sample[320] + 0.160435*sample[477] + 0.361598*sample[228] + 0.099468*sample[76] + -0.028809*sample[46] + 0.000000*sample[301] + -0.140994*sample[201] + 0.193924*sample[497] + 0.254322*sample[343] + 0.145542*sample[11] + 0.122161*sample[395] + -0.087175*sample[308];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies42(const std::vector<float>& sample) {    

    float score=0.183750*sample[171] + 0.261890*sample[493] + -0.126281*sample[496] + 0.077081*sample[13] + 0.027271*sample[218] + 0.194679*sample[491] + -0.000000*sample[296] + 0.100993*sample[199] + 0.077721*sample[178] + 0.040336*sample[138] + -0.000000*sample[61] + 0.061730*sample[102] + -0.000000*sample[446] + 0.000000*sample[60] + 0.856525*sample[342] + 0.092779*sample[7] + 0.002173*sample[292] + -0.000000*sample[375] + 0.031003*sample[193] + -0.042465*sample[281] + 0.209306*sample[69] + -0.121739*sample[461] + 0.099360*sample[121] + 1.000000*sample[235] + 0.856683*sample[224] + -0.028227*sample[333] + -0.071297*sample[438] + 0.018707*sample[53] + 0.000000*sample[268] + -0.071297*sample[465] + 0.039064*sample[158] + 0.022958*sample[211] + 0.031003*sample[193] + -0.000000*sample[242] + 0.000000*sample[375] + 0.088752*sample[484] + 0.100850*sample[5] + 0.043801*sample[427] + 0.379655*sample[101] + 0.116046*sample[470] + 0.000000*sample[375] + -0.047595*sample[369] + 0.056039*sample[56] + 0.142967*sample[63] + -0.145507*sample[105] + 0.068507*sample[86] + 0.000000*sample[189] + 0.001524*sample[313] + 0.031003*sample[193] + 0.712313*sample[245];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies43(const std::vector<float>& sample) {    

    float score=0.310451*sample[221] + 0.098846*sample[363] + -0.030826*sample[476] + 0.617991*sample[28] + 0.681883*sample[106] + 0.000000*sample[478] + 0.034708*sample[375] + 0.117737*sample[400] + 0.654219*sample[80] + -0.392475*sample[234] + 0.553091*sample[196] + 0.180660*sample[155] + 0.336418*sample[18] + 0.266325*sample[326] + 0.586316*sample[74] + 0.163303*sample[432] + 0.065087*sample[34] + -0.251468*sample[256] + 0.180660*sample[155] + -0.000000*sample[475] + 0.605986*sample[402] + 0.000000*sample[198] + 0.265923*sample[458] + 0.255998*sample[290] + -0.000000*sample[226] + -0.027325*sample[255] + 0.091762*sample[25] + 0.260747*sample[316] + 0.287144*sample[173] + 0.662875*sample[7] + 0.327847*sample[186] + 0.034497*sample[217] + 0.545845*sample[145] + 0.444352*sample[288] + -0.000000*sample[386] + 0.000000*sample[295] + 0.030913*sample[228] + -0.117814*sample[38] + 0.353211*sample[484] + 1.000000*sample[57] + 0.461757*sample[113] + 0.000000*sample[433] + 0.450549*sample[491] + 0.568464*sample[205] + 0.217010*sample[188] + 0.228127*sample[53] + 0.869634*sample[137] + 0.287144*sample[173] + 0.838808*sample[435] + 0.180660*sample[31];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies44(const std::vector<float>& sample) {    

    float score=0.187492*sample[366] + -0.000000*sample[437] + 0.162604*sample[177] + 0.073096*sample[111] + 0.141046*sample[197] + 0.051580*sample[81] + 0.037157*sample[346] + -0.000000*sample[463] + 0.054242*sample[96] + -0.000000*sample[463] + -0.008373*sample[451] + 0.002003*sample[145] + -0.002378*sample[172] + -0.029604*sample[89] + -0.085848*sample[57] + -0.014049*sample[362] + -0.001189*sample[74] + -0.000577*sample[166] + -0.017209*sample[76] + 0.028567*sample[48] + 0.219334*sample[453] + 0.388908*sample[221] + 0.692821*sample[340] + 0.168839*sample[476] + -0.019249*sample[58] + 0.032475*sample[123] + 0.039382*sample[352] + -0.019690*sample[194] + -0.019249*sample[58] + 0.039382*sample[352] + 0.133291*sample[313] + 0.086944*sample[270] + 0.048232*sample[131] + -0.167687*sample[85] + 0.201644*sample[290] + 0.000000*sample[398] + 0.000000*sample[159] + -0.033708*sample[31] + 0.113958*sample[171] + 0.000000*sample[265] + 0.027865*sample[486] + 0.430321*sample[324] + 0.018162*sample[277] + -0.005767*sample[106] + 0.005802*sample[395] + 0.741506*sample[329] + 0.000000*sample[303] + 0.086944*sample[270] + 0.230976*sample[282] + 0.000000*sample[108];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies45(const std::vector<float>& sample) {    

    float score=0.194937*sample[241] + -0.073642*sample[496] + 0.195695*sample[365] + -0.055434*sample[258] + 0.273602*sample[367] + 0.541693*sample[128] + 0.165143*sample[233] + -0.017850*sample[133] + 0.000000*sample[311] + 0.126567*sample[82] + 0.059604*sample[165] + 0.056161*sample[63] + 0.092365*sample[359] + 0.227201*sample[248] + 0.107237*sample[273] + -0.037711*sample[208] + 0.348890*sample[369] + -0.015565*sample[52] + 0.194937*sample[241] + 0.000000*sample[296] + -0.017472*sample[74] + -0.000000*sample[182] + 0.000000*sample[439] + 0.000000*sample[482] + 0.458307*sample[444] + 0.452627*sample[461] + 0.067343*sample[227] + 0.156192*sample[370] + 0.017040*sample[134] + -0.000171*sample[174] + 0.392539*sample[412] + -0.028461*sample[252] + 0.354671*sample[325] + 0.057524*sample[67] + 0.439587*sample[442] + 0.000000*sample[260] + 0.381507*sample[485] + -0.057123*sample[77] + 0.066025*sample[135] + 0.195695*sample[365] + 0.000000*sample[264] + -0.015565*sample[54] + -0.071726*sample[231] + 0.144589*sample[204] + 0.088584*sample[90] + 0.215056*sample[123] + -0.015565*sample[106] + 0.000000*sample[452] + -0.017850*sample[133] + 0.044770*sample[32];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies46(const std::vector<float>& sample) {    

    float score=0.010796*sample[378] + 0.040343*sample[365] + 0.169504*sample[161] + -0.000000*sample[482] + 0.000000*sample[244] + 0.306212*sample[196] + 0.000000*sample[9] + 0.340345*sample[219] + 0.057449*sample[116] + 0.085113*sample[491] + -0.012203*sample[468] + 0.000000*sample[319] + -0.084923*sample[413] + -0.006326*sample[123] + 0.000000*sample[478] + 0.056155*sample[86] + -0.105675*sample[411] + 0.046304*sample[67] + -0.000000*sample[253] + -0.022642*sample[415] + 0.000000*sample[371] + -0.000000*sample[385] + 0.000000*sample[297] + 0.021827*sample[131] + 0.139734*sample[497] + 0.024632*sample[71] + 0.065608*sample[143] + -0.009072*sample[276] + 0.195722*sample[402] + 0.490151*sample[258] + 0.049156*sample[431] + 0.361692*sample[287] + 0.704531*sample[332] + -0.597762*sample[261] + 0.041330*sample[56] + -0.016739*sample[384] + 0.026304*sample[404] + 0.066172*sample[47] + 0.088784*sample[20] + -0.084923*sample[413] + 0.023617*sample[459] + 0.062796*sample[39] + 0.590456*sample[326] + 0.012502*sample[466] + -0.036271*sample[109] + 0.830496*sample[335] + 0.077811*sample[440] + 0.156418*sample[96] + 0.350444*sample[87] + 0.781340*sample[337];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies47(const std::vector<float>& sample) {    

    float score=0.042798*sample[208] + 0.111700*sample[272] + 0.110999*sample[226] + -0.022818*sample[98] + 0.070527*sample[274] + -0.000000*sample[390] + 0.000000*sample[483] + 0.001666*sample[164] + 0.152760*sample[221] + 0.129725*sample[498] + -0.004413*sample[24] + 0.000000*sample[42] + 0.014593*sample[12] + 0.027068*sample[212] + 0.033349*sample[137] + 0.050476*sample[359] + 0.057141*sample[44] + -0.000000*sample[390] + 0.042911*sample[489] + -0.000000*sample[231] + 0.138117*sample[320] + 0.009596*sample[466] + -0.000938*sample[150] + 0.507471*sample[492] + 0.050426*sample[435] + 0.000000*sample[47] + 0.348966*sample[125] + 0.000553*sample[86] + -0.009381*sample[119] + 0.011376*sample[174] + -0.000000*sample[433] + -0.017905*sample[65] + 0.063582*sample[345] + 0.007492*sample[50] + 0.000000*sample[249] + 0.033349*sample[63] + 0.037525*sample[379] + 0.020490*sample[479] + -0.027118*sample[281] + 0.023674*sample[167] + 0.129646*sample[350] + -0.004413*sample[24] + 0.000000*sample[47] + 0.154756*sample[127] + 0.013110*sample[74] + -0.013219*sample[402] + -0.009369*sample[89] + 0.011528*sample[14] + 0.033349*sample[137] + 0.161029*sample[128];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies48(const std::vector<float>& sample) {    

    float score=0.092334*sample[293] + 0.363449*sample[206] + 1.000000*sample[237] + 0.605006*sample[115] + 0.595619*sample[118] + 1.000000*sample[94] + 0.602638*sample[445] + 0.720286*sample[82] + -0.000000*sample[428] + 0.142676*sample[197] + 0.000000*sample[235] + -0.516675*sample[288] + 0.623640*sample[345] + -0.000000*sample[420] + 0.617912*sample[168] + 0.717324*sample[140] + -0.303026*sample[454] + 0.236194*sample[367] + 0.777024*sample[373] + 0.000000*sample[385] + -0.000000*sample[384] + 0.018302*sample[57] + -0.000000*sample[299] + 0.749094*sample[446] + 0.833457*sample[406] + 0.000000*sample[481] + 1.000000*sample[254] + 0.483325*sample[344] + 0.000000*sample[247] + 0.411666*sample[251] + 0.142676*sample[197] + 0.312799*sample[76] + 1.000000*sample[289] + 0.236194*sample[466] + 1.000000*sample[335] + 0.000000*sample[298] + 0.621683*sample[112] + -0.040441*sample[81] + 0.418657*sample[141] + 0.670856*sample[143] + 0.384532*sample[98] + 0.662397*sample[138] + 0.623640*sample[402] + 0.000000*sample[298] + -0.000000*sample[306] + 0.752719*sample[276] + 0.000000*sample[478] + 1.000000*sample[243] + 0.667319*sample[147] + -0.082262*sample[46];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies49(const std::vector<float>& sample) {    

    float score=-0.000000*sample[463] + -0.000000*sample[9] + 0.000000*sample[402] + 0.000000*sample[179] + 0.000000*sample[379] + -0.000000*sample[175] + 0.000000*sample[406] + 0.000000*sample[133] + 0.000000*sample[154] + -0.000000*sample[353] + -0.000000*sample[116] + 0.000000*sample[477] + 0.000000*sample[85] + 0.000000*sample[271] + 0.000000*sample[416] + 0.000000*sample[448] + 0.000000*sample[20] + 0.000000*sample[224] + -0.000000*sample[31] + -0.000000*sample[24] + 0.000000*sample[397] + -0.000000*sample[418] + 0.000000*sample[28] + -0.000000*sample[474] + 1.000000*sample[218] + 0.000000*sample[126] + -0.000000*sample[256] + -0.000000*sample[465] + -0.000000*sample[296] + 1.000000*sample[348] + -0.000000*sample[384] + -0.000000*sample[24] + 0.000000*sample[386] + -0.000000*sample[410] + 0.000000*sample[16] + 0.000000*sample[462] + 0.000000*sample[160] + -0.000000*sample[65] + 0.000000*sample[312] + -0.000000*sample[79] + -0.000000*sample[115] + 0.000000*sample[434] + -0.000000*sample[24] + -0.000000*sample[410] + 0.000000*sample[240] + -0.000000*sample[100] + -0.000000*sample[97] + 0.000000*sample[497] + -0.000000*sample[411] + 0.000000*sample[288];

    score=1-score;
    if(score<0) {
        score=-score;
    }

    return score;
}

float anomalies(const std::vector<float>& sample) {
    //handles normalization and constructs an ensemble from the individual models
    std::vector<float> work;

    work.push_back((sample[0]-0.0)/1.0);
    work.push_back((sample[1]-0.0)/1.0);
    work.push_back((sample[2]-0.0)/1.0);
    work.push_back((sample[3]-0.0)/1.0);
    work.push_back((sample[4]-0.0)/1.0);
    work.push_back((sample[5]-0.0)/1.0);
    work.push_back((sample[6]-0.0)/1.0);
    work.push_back((sample[7]-0.0)/1.0);
    work.push_back((sample[8]-0.0)/1.0);
    work.push_back((sample[9]-0.0)/1.0);
    work.push_back((sample[10]-0.0)/1.0);
    work.push_back((sample[11]-0.0)/1.0);
    work.push_back((sample[12]-0.0)/1.0);
    work.push_back((sample[13]-0.0)/1.0);
    work.push_back((sample[14]-0.0)/1.0);
    work.push_back((sample[15]-0.0)/1.0);
    work.push_back((sample[16]-0.0)/1.0);
    work.push_back((sample[17]-0.0)/1.0);
    work.push_back((sample[18]-0.0)/1.0);
    work.push_back((sample[19]-0.0)/1.0);
    work.push_back((sample[20]-0.0)/1.0);
    work.push_back((sample[21]-0.0)/1.0);
    work.push_back((sample[22]-0.0)/1.0);
    work.push_back((sample[23]-0.0)/1.0);
    work.push_back((sample[24]-0.0)/1.0);
    work.push_back((sample[25]-0.0)/1.0);
    work.push_back((sample[26]-0.0)/1.0);
    work.push_back((sample[27]-0.0)/1.0);
    work.push_back((sample[28]-0.0)/1.0);
    work.push_back((sample[29]-0.0)/1.0);
    work.push_back((sample[30]-0.0)/1.0);
    work.push_back((sample[31]-0.0)/1.0);
    work.push_back((sample[32]-0.0)/1.0);
    work.push_back((sample[33]-0.0)/1.0);
    work.push_back((sample[34]-0.0)/1.0);
    work.push_back((sample[35]-0.0)/1.0);
    work.push_back((sample[36]-0.0)/1.0);
    work.push_back((sample[37]-0.0)/1.0);
    work.push_back((sample[38]-0.0)/1.0);
    work.push_back((sample[39]-0.0)/1.0);
    work.push_back((sample[40]-0.0)/1.0);
    work.push_back((sample[41]-0.0)/1.0);
    work.push_back((sample[42]-0.0)/1.0);
    work.push_back((sample[43]-0.0)/1.0);
    work.push_back((sample[44]-0.0)/1.0);
    work.push_back((sample[45]-0.0)/1.0);
    work.push_back((sample[46]-0.0)/1.0);
    work.push_back((sample[47]-0.0)/1.0);
    work.push_back((sample[48]-0.0)/1.0);
    work.push_back((sample[49]-0.0)/1.0);
    work.push_back((sample[50]-0.0)/1.0);
    work.push_back((sample[51]-0.0)/1.0);
    work.push_back((sample[52]-0.0)/1.0);
    work.push_back((sample[53]-0.0)/1.0);
    work.push_back((sample[54]-0.0)/1.0);
    work.push_back((sample[55]-0.0)/1.0);
    work.push_back((sample[56]-0.0)/1.0);
    work.push_back((sample[57]-0.0)/1.0);
    work.push_back((sample[58]-0.0)/1.0);
    work.push_back((sample[59]-0.0)/1.0);
    work.push_back((sample[60]-0.0)/1.0);
    work.push_back((sample[61]-0.0)/1.0);
    work.push_back((sample[62]-0.0)/1.0);
    work.push_back((sample[63]-0.0)/1.0);
    work.push_back((sample[64]-0.0)/1.0);
    work.push_back((sample[65]-0.0)/1.0);
    work.push_back((sample[66]-0.0)/1.0);
    work.push_back((sample[67]-0.0)/1.0);
    work.push_back((sample[68]-0.0)/1.0);
    work.push_back((sample[69]-0.0)/1.0);
    work.push_back((sample[70]-0.0)/1.0);
    work.push_back((sample[71]-0.0)/1.0);
    work.push_back((sample[72]-0.0)/1.0);
    work.push_back((sample[73]-0.0)/1.0);
    work.push_back((sample[74]-0.0)/1.0);
    work.push_back((sample[75]-0.0)/1.0);
    work.push_back((sample[76]-0.0)/1.0);
    work.push_back((sample[77]-0.0)/1.0);
    work.push_back((sample[78]-0.0)/1.0);
    work.push_back((sample[79]-0.0)/1.0);
    work.push_back((sample[80]-0.0)/1.0);
    work.push_back((sample[81]-0.0)/1.0);
    work.push_back((sample[82]-0.0)/1.0);
    work.push_back((sample[83]-0.0)/1.0);
    work.push_back((sample[84]-0.0)/1.0);
    work.push_back((sample[85]-0.0)/1.0);
    work.push_back((sample[86]-0.0)/1.0);
    work.push_back((sample[87]-0.0)/1.0);
    work.push_back((sample[88]-0.0)/1.0);
    work.push_back((sample[89]-0.0)/1.0);
    work.push_back((sample[90]-0.0)/1.0);
    work.push_back((sample[91]-0.0)/1.0);
    work.push_back((sample[92]-0.0)/1.0);
    work.push_back((sample[93]-0.0)/1.0);
    work.push_back((sample[94]-0.0)/1.0);
    work.push_back((sample[95]-0.0)/1.0);
    work.push_back((sample[96]-0.0)/1.0);
    work.push_back((sample[97]-0.0)/1.0);
    work.push_back((sample[98]-0.0)/1.0);
    work.push_back((sample[99]-0.0)/1.0);
    work.push_back((sample[100]-0.0)/1.0);
    work.push_back((sample[101]-0.0)/1.0);
    work.push_back((sample[102]-0.0)/1.0);
    work.push_back((sample[103]-0.0)/1.0);
    work.push_back((sample[104]-0.0)/1.0);
    work.push_back((sample[105]-0.0)/1.0);
    work.push_back((sample[106]-0.0)/1.0);
    work.push_back((sample[107]-0.0)/1.0);
    work.push_back((sample[108]-0.0)/1.0);
    work.push_back((sample[109]-0.0)/1.0);
    work.push_back((sample[110]-0.0)/1.0);
    work.push_back((sample[111]-0.0)/1.0);
    work.push_back((sample[112]-0.0)/1.0);
    work.push_back((sample[113]-0.0)/1.0);
    work.push_back((sample[114]-0.0)/1.0);
    work.push_back((sample[115]-0.0)/1.0);
    work.push_back((sample[116]-0.0)/1.0);
    work.push_back((sample[117]-0.0)/1.0);
    work.push_back((sample[118]-0.0)/1.0);
    work.push_back((sample[119]-0.0)/1.0);
    work.push_back((sample[120]-0.0)/1.0);
    work.push_back((sample[121]-0.0)/1.0);
    work.push_back((sample[122]-0.0)/1.0);
    work.push_back((sample[123]-0.0)/1.0);
    work.push_back((sample[124]-0.0)/1.0);
    work.push_back((sample[125]-0.0)/1.0);
    work.push_back((sample[126]-0.0)/0.991699);
    work.push_back((sample[127]-0.0)/1.0);
    work.push_back((sample[128]-0.0)/1.0);
    work.push_back((sample[129]-0.0)/1.0);
    work.push_back((sample[130]-0.0)/1.0);
    work.push_back((sample[131]-0.0)/1.0);
    work.push_back((sample[132]-0.0)/1.0);
    work.push_back((sample[133]-0.0)/1.0);
    work.push_back((sample[134]-0.0)/1.0);
    work.push_back((sample[135]-0.0)/1.0);
    work.push_back((sample[136]-0.0)/1.0);
    work.push_back((sample[137]-0.0)/1.0);
    work.push_back((sample[138]-0.0)/1.0);
    work.push_back((sample[139]-0.0)/1.0);
    work.push_back((sample[140]-0.0)/1.0);
    work.push_back((sample[141]-0.0)/1.0);
    work.push_back((sample[142]-0.0)/1.0);
    work.push_back((sample[143]-0.0)/1.0);
    work.push_back((sample[144]-0.0)/1.0);
    work.push_back((sample[145]-0.0)/1.0);
    work.push_back((sample[146]-0.0)/1.0);
    work.push_back((sample[147]-0.0)/1.0);
    work.push_back((sample[148]-0.0)/1.0);
    work.push_back((sample[149]-0.0)/1.0);
    work.push_back((sample[150]-0.0)/1.0);
    work.push_back((sample[151]-0.0)/1.0);
    work.push_back((sample[152]-0.0)/1.0);
    work.push_back((sample[153]-0.0)/1.0);
    work.push_back((sample[154]-0.0)/1.0);
    work.push_back((sample[155]-0.0)/1.0);
    work.push_back((sample[156]-0.0)/1.0);
    work.push_back((sample[157]-0.0)/1.0);
    work.push_back((sample[158]-0.0)/1.0);
    work.push_back((sample[159]-0.0)/1.0);
    work.push_back((sample[160]-0.0)/1.0);
    work.push_back((sample[161]-0.0)/1.0);
    work.push_back((sample[162]-0.0)/1.0);
    work.push_back((sample[163]-0.0)/1.0);
    work.push_back((sample[164]-0.0)/1.0);
    work.push_back((sample[165]-0.0)/1.0);
    work.push_back((sample[166]-0.0)/1.0);
    work.push_back((sample[167]-0.0)/1.0);
    work.push_back((sample[168]-0.0)/1.0);
    work.push_back((sample[169]-0.0)/1.0);
    work.push_back((sample[170]-0.0)/1.0);
    work.push_back((sample[171]-0.0)/1.0);
    work.push_back((sample[172]-0.0)/1.0);
    work.push_back((sample[173]-0.0)/1.0);
    work.push_back((sample[174]-0.0)/1.0);
    work.push_back((sample[175]-0.0)/1.0);
    work.push_back((sample[176]-0.0)/1.0);
    work.push_back((sample[177]-0.0)/1.0);
    work.push_back((sample[178]-0.0)/1.0);
    work.push_back((sample[179]-0.0)/1.0);
    work.push_back((sample[180]-0.0)/1.0);
    work.push_back((sample[181]-0.0)/1.0);
    work.push_back((sample[182]-0.0)/1.0);
    work.push_back((sample[183]-0.0)/1.0);
    work.push_back((sample[184]-0.0)/1.0);
    work.push_back((sample[185]-0.0)/1.0);
    work.push_back((sample[186]-0.0)/1.0);
    work.push_back((sample[187]-0.0)/1.0);
    work.push_back((sample[188]-0.0)/1.0);
    work.push_back((sample[189]-0.0)/1.0);
    work.push_back((sample[190]-0.0)/1.0);
    work.push_back((sample[191]-0.0)/1.0);
    work.push_back((sample[192]-0.0)/1.0);
    work.push_back((sample[193]-0.0)/1.0);
    work.push_back((sample[194]-0.0)/1.0);
    work.push_back((sample[195]-0.0)/1.0);
    work.push_back((sample[196]-0.0)/1.0);
    work.push_back((sample[197]-0.0)/1.0);
    work.push_back((sample[198]-0.0)/1.0);
    work.push_back((sample[199]-0.0)/1.0);
    work.push_back((sample[200]-0.0)/1.0);
    work.push_back((sample[201]-0.0)/1.0);
    work.push_back((sample[202]-0.0)/1.0);
    work.push_back((sample[203]-0.0)/1.0);
    work.push_back((sample[204]-0.0)/1.0);
    work.push_back((sample[205]-0.0)/1.0);
    work.push_back((sample[206]-0.0)/1.0);
    work.push_back((sample[207]-0.0)/1.0);
    work.push_back((sample[208]-0.0)/1.0);
    work.push_back((sample[209]-0.0)/1.0);
    work.push_back((sample[210]-0.0)/1.0);
    work.push_back((sample[211]-0.0)/0.390004);
    work.push_back((sample[212]-0.0)/1.0);
    work.push_back((sample[213]-0.0)/1.0);
    work.push_back((sample[214]-0.0)/1.0);
    work.push_back((sample[215]-0.0)/1.0);
    work.push_back((sample[216]-0.0)/1.0);
    work.push_back((sample[217]-0.0)/1.0);
    work.push_back((sample[218]-0.0)/1.0);
    work.push_back((sample[219]-0.0)/1.0);
    work.push_back((sample[220]-0.0)/1.0);
    work.push_back((sample[221]-0.0)/1.0);
    work.push_back((sample[222]-0.0)/1.0);
    work.push_back((sample[223]-0.0)/1.0);
    work.push_back((sample[224]-0.0)/1.0);
    work.push_back((sample[225]-0.0)/1.0);
    work.push_back((sample[226]-0.0)/1.0);
    work.push_back((sample[227]-0.0)/1.0);
    work.push_back((sample[228]-0.0)/1.0);
    work.push_back((sample[229]-0.0)/1.0);
    work.push_back((sample[230]-0.0)/1.0);
    work.push_back((sample[231]-0.0)/1.0);
    work.push_back((sample[232]-0.0)/1.0);
    work.push_back((sample[233]-0.0)/1.0);
    work.push_back((sample[234]-0.0)/1.0);
    work.push_back((sample[235]-0.0)/1.0);
    work.push_back((sample[236]-0.0)/1.0);
    work.push_back((sample[237]-0.0)/1.0);
    work.push_back((sample[238]-0.0)/1.0);
    work.push_back((sample[239]-0.0)/1.0);
    work.push_back((sample[240]-0.0)/1.0);
    work.push_back((sample[241]-0.0)/1.0);
    work.push_back((sample[242]-0.0)/1.0);
    work.push_back((sample[243]-0.0)/1.0);
    work.push_back((sample[244]-0.0)/1.0);
    work.push_back((sample[245]-0.0)/1.0);
    work.push_back((sample[246]-0.0)/1.0);
    work.push_back((sample[247]-0.0)/1.0);
    work.push_back((sample[248]-0.0)/1.0);
    work.push_back((sample[249]-0.0)/1.0);
    work.push_back((sample[250]-0.0)/1.0);
    work.push_back((sample[251]-0.0)/1.0);
    work.push_back((sample[252]-0.0)/1.0);
    work.push_back((sample[253]-0.0)/1.0);
    work.push_back((sample[254]-0.0)/1.0);
    work.push_back((sample[255]-0.0)/1.0);
    work.push_back((sample[256]-0.0)/1.0);
    work.push_back((sample[257]-0.0)/1.0);
    work.push_back((sample[258]-0.0)/1.0);
    work.push_back((sample[259]-0.0)/1.0);
    work.push_back((sample[260]-0.0)/1.0);
    work.push_back((sample[261]-0.0)/1.0);
    work.push_back((sample[262]-0.0)/1.0);
    work.push_back((sample[263]-0.0)/1.0);
    work.push_back((sample[264]-0.0)/1.0);
    work.push_back((sample[265]-0.0)/1.0);
    work.push_back((sample[266]-0.0)/1.0);
    work.push_back((sample[267]-0.0)/1.0);
    work.push_back((sample[268]-0.0)/1.0);
    work.push_back((sample[269]-0.0)/1.0);
    work.push_back((sample[270]-0.0)/1.0);
    work.push_back((sample[271]-0.0)/1.0);
    work.push_back((sample[272]-0.0)/1.0);
    work.push_back((sample[273]-0.0)/1.0);
    work.push_back((sample[274]-0.0)/1.0);
    work.push_back((sample[275]-0.0)/1.0);
    work.push_back((sample[276]-0.0)/1.0);
    work.push_back((sample[277]-0.0)/1.0);
    work.push_back((sample[278]-0.0)/1.0);
    work.push_back((sample[279]-0.0)/1.0);
    work.push_back((sample[280]-0.0)/1.0);
    work.push_back((sample[281]-0.0)/1.0);
    work.push_back((sample[282]-0.0)/1.0);
    work.push_back((sample[283]-0.0)/1.0);
    work.push_back((sample[284]-0.0)/1.0);
    work.push_back((sample[285]-0.0)/1.0);
    work.push_back((sample[286]-0.0)/1.0);
    work.push_back((sample[287]-0.0)/1.0);
    work.push_back((sample[288]-0.0)/1.0);
    work.push_back((sample[289]-0.0)/1.0);
    work.push_back((sample[290]-0.0)/1.0);
    work.push_back((sample[291]-0.0)/1.0);
    work.push_back((sample[292]-0.0)/1.0);
    work.push_back((sample[293]-0.0)/1.0);
    work.push_back((sample[294]-0.0)/1.0);
    work.push_back((sample[295]-0.0)/1.0);
    work.push_back((sample[296]-0.0)/1.0);
    work.push_back((sample[297]-0.0)/1.0);
    work.push_back((sample[298]-0.0)/1.0);
    work.push_back((sample[299]-0.0)/1.0);
    work.push_back((sample[300]-0.0)/1.0);
    work.push_back((sample[301]-0.0)/1.0);
    work.push_back((sample[302]-0.0)/1.0);
    work.push_back((sample[303]-0.0)/1.0);
    work.push_back((sample[304]-0.0)/1.0);
    work.push_back((sample[305]-0.0)/1.0);
    work.push_back((sample[306]-0.0)/1.0);
    work.push_back((sample[307]-0.0)/1.0);
    work.push_back((sample[308]-0.0)/1.0);
    work.push_back((sample[309]-0.0)/1.0);
    work.push_back((sample[310]-0.0)/1.0);
    work.push_back((sample[311]-0.0)/1.0);
    work.push_back((sample[312]-0.0)/1.0);
    work.push_back((sample[313]-0.0)/1.0);
    work.push_back((sample[314]-0.0)/1.0);
    work.push_back((sample[315]-0.0)/1.0);
    work.push_back((sample[316]-0.0)/1.0);
    work.push_back((sample[317]-0.0)/1.0);
    work.push_back((sample[318]-0.0)/1.0);
    work.push_back((sample[319]-0.0)/1.0);
    work.push_back((sample[320]-0.0)/1.0);
    work.push_back((sample[321]-0.0)/1.0);
    work.push_back((sample[322]-0.0)/1.0);
    work.push_back((sample[323]-0.0)/1.0);
    work.push_back((sample[324]-0.0)/1.0);
    work.push_back((sample[325]-0.0)/1.0);
    work.push_back((sample[326]-0.0)/1.0);
    work.push_back((sample[327]-0.0)/1.0);
    work.push_back((sample[328]-0.0)/1.0);
    work.push_back((sample[329]-0.0)/1.0);
    work.push_back((sample[330]-0.0)/1.0);
    work.push_back((sample[331]-0.0)/1.0);
    work.push_back((sample[332]-0.0)/1.0);
    work.push_back((sample[333]-0.0)/1.0);
    work.push_back((sample[334]-0.0)/1.0);
    work.push_back((sample[335]-0.0)/1.0);
    work.push_back((sample[336]-0.0)/1.0);
    work.push_back((sample[337]-0.0)/1.0);
    work.push_back((sample[338]-0.0)/1.0);
    work.push_back((sample[339]-0.0)/1.0);
    work.push_back((sample[340]-0.0)/1.0);
    work.push_back((sample[341]-0.0)/1.0);
    work.push_back((sample[342]-0.0)/1.0);
    work.push_back((sample[343]-0.0)/1.0);
    work.push_back((sample[344]-0.0)/1.0);
    work.push_back((sample[345]-0.0)/1.0);
    work.push_back((sample[346]-0.0)/1.0);
    work.push_back((sample[347]-0.0)/1.0);
    work.push_back((sample[348]-0.0)/1.0);
    work.push_back((sample[349]-0.0)/1.0);
    work.push_back((sample[350]-0.0)/1.0);
    work.push_back((sample[351]-0.0)/1.0);
    work.push_back((sample[352]-0.0)/1.0);
    work.push_back((sample[353]-0.0)/1.0);
    work.push_back((sample[354]-0.0)/1.0);
    work.push_back((sample[355]-0.0)/1.0);
    work.push_back((sample[356]-0.0)/1.0);
    work.push_back((sample[357]-0.0)/1.0);
    work.push_back((sample[358]-0.0)/1.0);
    work.push_back((sample[359]-0.0)/1.0);
    work.push_back((sample[360]-0.0)/1.0);
    work.push_back((sample[361]-0.0)/1.0);
    work.push_back((sample[362]-0.0)/1.0);
    work.push_back((sample[363]-0.0)/1.0);
    work.push_back((sample[364]-0.0)/1.0);
    work.push_back((sample[365]-0.0)/1.0);
    work.push_back((sample[366]-0.0)/1.0);
    work.push_back((sample[367]-0.0)/1.0);
    work.push_back((sample[368]-0.0)/1.0);
    work.push_back((sample[369]-0.0)/1.0);
    work.push_back((sample[370]-0.0)/1.0);
    work.push_back((sample[371]-0.0)/1.0);
    work.push_back((sample[372]-0.0)/1.0);
    work.push_back((sample[373]-0.0)/1.0);
    work.push_back((sample[374]-0.0)/1.0);
    work.push_back((sample[375]-0.0)/1.0);
    work.push_back((sample[376]-0.0)/1.0);
    work.push_back((sample[377]-0.0)/1.0);
    work.push_back((sample[378]-0.0)/1.0);
    work.push_back((sample[379]-0.0)/1.0);
    work.push_back((sample[380]-0.0)/1.0);
    work.push_back((sample[381]-0.0)/1.0);
    work.push_back((sample[382]-0.0)/1.0);
    work.push_back((sample[383]-0.0)/1.0);
    work.push_back((sample[384]-0.0)/1.0);
    work.push_back((sample[385]-0.0)/1.0);
    work.push_back((sample[386]-0.0)/1.0);
    work.push_back((sample[387]-0.0)/1.0);
    work.push_back((sample[388]-0.0)/1.0);
    work.push_back((sample[389]-0.0)/1.0);
    work.push_back((sample[390]-0.0)/1.0);
    work.push_back((sample[391]-0.0)/1.0);
    work.push_back((sample[392]-0.0)/1.0);
    work.push_back((sample[393]-0.0)/1.0);
    work.push_back((sample[394]-0.0)/1.0);
    work.push_back((sample[395]-0.0)/1.0);
    work.push_back((sample[396]-0.0)/1.0);
    work.push_back((sample[397]-0.0)/1.0);
    work.push_back((sample[398]-0.0)/1.0);
    work.push_back((sample[399]-0.0)/1.0);
    work.push_back((sample[400]-0.0)/1.0);
    work.push_back((sample[401]-0.0)/1.0);
    work.push_back((sample[402]-0.0)/1.0);
    work.push_back((sample[403]-0.0)/1.0);
    work.push_back((sample[404]-0.0)/1.0);
    work.push_back((sample[405]-0.0)/1.0);
    work.push_back((sample[406]-0.0)/1.0);
    work.push_back((sample[407]-0.0)/1.0);
    work.push_back((sample[408]-0.0)/1.0);
    work.push_back((sample[409]-0.0)/1.0);
    work.push_back((sample[410]-0.0)/1.0);
    work.push_back((sample[411]-0.0)/1.0);
    work.push_back((sample[412]-0.0)/1.0);
    work.push_back((sample[413]-0.0)/1.0);
    work.push_back((sample[414]-0.0)/1.0);
    work.push_back((sample[415]-0.0)/1.0);
    work.push_back((sample[416]-0.0)/1.0);
    work.push_back((sample[417]-0.0)/1.0);
    work.push_back((sample[418]-0.0)/1.0);
    work.push_back((sample[419]-0.0)/1.0);
    work.push_back((sample[420]-0.0)/1.0);
    work.push_back((sample[421]-0.0)/1.0);
    work.push_back((sample[422]-0.0)/1.0);
    work.push_back((sample[423]-0.0)/1.0);
    work.push_back((sample[424]-0.0)/1.0);
    work.push_back((sample[425]-0.0)/1.0);
    work.push_back((sample[426]-0.0)/1.0);
    work.push_back((sample[427]-0.0)/1.0);
    work.push_back((sample[428]-0.0)/1.0);
    work.push_back((sample[429]-0.0)/1.0);
    work.push_back((sample[430]-0.0)/1.0);
    work.push_back((sample[431]-0.0)/1.0);
    work.push_back((sample[432]-0.0)/1.0);
    work.push_back((sample[433]-0.0)/1.0);
    work.push_back((sample[434]-0.0)/1.0);
    work.push_back((sample[435]-0.0)/1.0);
    work.push_back((sample[436]-0.0)/1.0);
    work.push_back((sample[437]-0.0)/1.0);
    work.push_back((sample[438]-0.0)/1.0);
    work.push_back((sample[439]-0.0)/1.0);
    work.push_back((sample[440]-0.0)/1.0);
    work.push_back((sample[441]-0.0)/1.0);
    work.push_back((sample[442]-0.0)/1.0);
    work.push_back((sample[443]-0.0)/1.0);
    work.push_back((sample[444]-0.0)/1.0);
    work.push_back((sample[445]-0.0)/1.0);
    work.push_back((sample[446]-0.0)/1.0);
    work.push_back((sample[447]-0.0)/1.0);
    work.push_back((sample[448]-0.0)/1.0);
    work.push_back((sample[449]-0.0)/1.0);
    work.push_back((sample[450]-0.0)/1.0);
    work.push_back((sample[451]-0.0)/1.0);
    work.push_back((sample[452]-0.0)/1.0);
    work.push_back((sample[453]-0.0)/1.0);
    work.push_back((sample[454]-0.0)/1.0);
    work.push_back((sample[455]-0.0)/1.0);
    work.push_back((sample[456]-0.0)/1.0);
    work.push_back((sample[457]-0.0)/1.0);
    work.push_back((sample[458]-0.0)/1.0);
    work.push_back((sample[459]-0.0)/1.0);
    work.push_back((sample[460]-0.0)/1.0);
    work.push_back((sample[461]-0.0)/1.0);
    work.push_back((sample[462]-0.0)/1.0);
    work.push_back((sample[463]-0.0)/1.0);
    work.push_back((sample[464]-0.0)/1.0);
    work.push_back((sample[465]-0.0)/1.0);
    work.push_back((sample[466]-0.0)/1.0);
    work.push_back((sample[467]-0.0)/1.0);
    work.push_back((sample[468]-0.0)/1.0);
    work.push_back((sample[469]-0.0)/1.0);
    work.push_back((sample[470]-0.0)/1.0);
    work.push_back((sample[471]-0.0)/1.0);
    work.push_back((sample[472]-0.0)/1.0);
    work.push_back((sample[473]-0.0)/1.0);
    work.push_back((sample[474]-0.0)/1.0);
    work.push_back((sample[475]-0.0)/1.0);
    work.push_back((sample[476]-0.0)/1.0);
    work.push_back((sample[477]-0.0)/1.0);
    work.push_back((sample[478]-0.0)/1.0);
    work.push_back((sample[479]-0.0)/1.0);
    work.push_back((sample[480]-0.0)/1.0);
    work.push_back((sample[481]-0.0)/1.0);
    work.push_back((sample[482]-0.0)/1.0);
    work.push_back((sample[483]-0.0)/1.0);
    work.push_back((sample[484]-0.0)/1.0);
    work.push_back((sample[485]-0.0)/1.0);
    work.push_back((sample[486]-0.0)/1.0);
    work.push_back((sample[487]-0.0)/1.0);
    work.push_back((sample[488]-0.0)/1.0);
    work.push_back((sample[489]-0.0)/1.0);
    work.push_back((sample[490]-0.0)/1.0);
    work.push_back((sample[491]-0.0)/1.0);
    work.push_back((sample[492]-0.0)/1.0);
    work.push_back((sample[493]-0.0)/1.0);
    work.push_back((sample[494]-0.0)/1.0);
    work.push_back((sample[495]-0.0)/1.0);
    work.push_back((sample[496]-0.0)/1.0);
    work.push_back((sample[497]-0.0)/1.0);
    work.push_back((sample[498]-0.0)/1.0);
    work.push_back((sample[499]-0.0)/1.0);

    float score=0.0f;
    score=std::max(score, anomalies0(work));
    score=std::max(score, anomalies1(work));
    score=std::max(score, anomalies2(work));
    score=std::max(score, anomalies3(work));
    score=std::max(score, anomalies4(work));
    score=std::max(score, anomalies5(work));
    score=std::max(score, anomalies6(work));
    score=std::max(score, anomalies7(work));
    score=std::max(score, anomalies8(work));
    score=std::max(score, anomalies9(work));
    score=std::max(score, anomalies10(work));
    score=std::max(score, anomalies11(work));
    score=std::max(score, anomalies12(work));
    score=std::max(score, anomalies13(work));
    score=std::max(score, anomalies14(work));
    score=std::max(score, anomalies15(work));
    score=std::max(score, anomalies16(work));
    score=std::max(score, anomalies17(work));
    score=std::max(score, anomalies18(work));
    score=std::max(score, anomalies19(work));
    score=std::max(score, anomalies20(work));
    score=std::max(score, anomalies21(work));
    score=std::max(score, anomalies22(work));
    score=std::max(score, anomalies23(work));
    score=std::max(score, anomalies24(work));
    score=std::max(score, anomalies25(work));
    score=std::max(score, anomalies26(work));
    score=std::max(score, anomalies27(work));
    score=std::max(score, anomalies28(work));
    score=std::max(score, anomalies29(work));
    score=std::max(score, anomalies30(work));
    score=std::max(score, anomalies31(work));
    score=std::max(score, anomalies32(work));
    score=std::max(score, anomalies33(work));
    score=std::max(score, anomalies34(work));
    score=std::max(score, anomalies35(work));
    score=std::max(score, anomalies36(work));
    score=std::max(score, anomalies37(work));
    score=std::max(score, anomalies38(work));
    score=std::max(score, anomalies39(work));
    score=std::max(score, anomalies40(work));
    score=std::max(score, anomalies41(work));
    score=std::max(score, anomalies42(work));
    score=std::max(score, anomalies43(work));
    score=std::max(score, anomalies44(work));
    score=std::max(score, anomalies45(work));
    score=std::max(score, anomalies46(work));
    score=std::max(score, anomalies47(work));
    score=std::max(score, anomalies48(work));
    score=std::max(score, anomalies49(work));

    return score;
}
