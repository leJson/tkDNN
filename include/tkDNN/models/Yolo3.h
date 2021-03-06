int preYoloFilters = (classes+5)*3; 

std::string input_bin = bin_path + "/layers/input.bin";
std::vector<std::string> output_bins = {
    bin_path + "/debug/layer82_out.bin",
    bin_path + "/debug/layer94_out.bin",
    bin_path + "/debug/layer106_out.bin"
};
std::string c0_bin    = bin_path + "/layers/c0.bin";
std::string c1_bin    = bin_path + "/layers/c1.bin";
std::string c2_bin    = bin_path + "/layers/c2.bin";
std::string c3_bin    = bin_path + "/layers/c3.bin";
std::string c5_bin    = bin_path + "/layers/c5.bin";
std::string c6_bin    = bin_path + "/layers/c6.bin";
std::string c7_bin    = bin_path + "/layers/c7.bin";
std::string c9_bin    = bin_path + "/layers/c9.bin";
std::string c10_bin   = bin_path + "/layers/c10.bin";
std::string c12_bin   = bin_path + "/layers/c12.bin";
std::string c13_bin   = bin_path + "/layers/c13.bin";
std::string c14_bin   = bin_path + "/layers/c14.bin";
std::string c16_bin   = bin_path + "/layers/c16.bin";
std::string c17_bin   = bin_path + "/layers/c17.bin";
std::string c19_bin   = bin_path + "/layers/c19.bin";
std::string c20_bin   = bin_path + "/layers/c20.bin";
std::string c22_bin   = bin_path + "/layers/c22.bin";
std::string c23_bin   = bin_path + "/layers/c23.bin";
std::string c25_bin   = bin_path + "/layers/c25.bin";
std::string c26_bin   = bin_path + "/layers/c26.bin";
std::string c28_bin   = bin_path + "/layers/c28.bin";
std::string c29_bin   = bin_path + "/layers/c29.bin";
std::string c31_bin   = bin_path + "/layers/c31.bin";
std::string c32_bin   = bin_path + "/layers/c32.bin";
std::string c34_bin   = bin_path + "/layers/c34.bin";
std::string c35_bin   = bin_path + "/layers/c35.bin";
std::string c37_bin   = bin_path + "/layers/c37.bin";
std::string c38_bin   = bin_path + "/layers/c38.bin";
std::string c39_bin   = bin_path + "/layers/c39.bin";
std::string c41_bin   = bin_path + "/layers/c41.bin";
std::string c42_bin   = bin_path + "/layers/c42.bin";
std::string c44_bin   = bin_path + "/layers/c44.bin";
std::string c45_bin   = bin_path + "/layers/c45.bin";
std::string c47_bin   = bin_path + "/layers/c47.bin";
std::string c48_bin   = bin_path + "/layers/c48.bin";
std::string c50_bin   = bin_path + "/layers/c50.bin";
std::string c51_bin   = bin_path + "/layers/c51.bin";
std::string c53_bin   = bin_path + "/layers/c53.bin";
std::string c54_bin   = bin_path + "/layers/c54.bin";
std::string c56_bin   = bin_path + "/layers/c56.bin";
std::string c57_bin   = bin_path + "/layers/c57.bin";
std::string c59_bin   = bin_path + "/layers/c59.bin";
std::string c60_bin   = bin_path + "/layers/c60.bin";
std::string c62_bin   = bin_path + "/layers/c62.bin";
std::string c63_bin   = bin_path + "/layers/c63.bin";
std::string c64_bin   = bin_path + "/layers/c64.bin";
std::string c66_bin   = bin_path + "/layers/c66.bin";
std::string c67_bin   = bin_path + "/layers/c67.bin";
std::string c69_bin   = bin_path + "/layers/c69.bin";
std::string c70_bin   = bin_path + "/layers/c70.bin";
std::string c72_bin   = bin_path + "/layers/c72.bin";
std::string c73_bin   = bin_path + "/layers/c73.bin";
std::string c75_bin   = bin_path + "/layers/c75.bin";
std::string c76_bin   = bin_path + "/layers/c76.bin";
std::string c77_bin   = bin_path + "/layers/c77.bin";
std::string c78_bin   = bin_path + "/layers/c78.bin";
std::string c79_bin   = bin_path + "/layers/c79.bin";
std::string c80_bin   = bin_path + "/layers/c80.bin";
std::string c81_bin   = bin_path + "/layers/c81.bin";
std::string g82_bin   = bin_path + "/layers/g82.bin";
std::string c84_bin   = bin_path + "/layers/c84.bin";
std::string c87_bin   = bin_path + "/layers/c87.bin";
std::string c88_bin   = bin_path + "/layers/c88.bin";
std::string c89_bin   = bin_path + "/layers/c89.bin";
std::string c90_bin   = bin_path + "/layers/c90.bin";
std::string c91_bin   = bin_path + "/layers/c91.bin";
std::string c92_bin   = bin_path + "/layers/c92.bin";
std::string c93_bin   = bin_path + "/layers/c93.bin";
std::string g94_bin   = bin_path + "/layers/g94.bin";
std::string c96_bin   = bin_path + "/layers/c96.bin";
std::string c99_bin   = bin_path + "/layers/c99.bin";
std::string c100_bin  = bin_path + "/layers/c100.bin";
std::string c101_bin  = bin_path + "/layers/c101.bin";
std::string c102_bin  = bin_path + "/layers/c102.bin";
std::string c103_bin  = bin_path + "/layers/c103.bin";
std::string c104_bin  = bin_path + "/layers/c104.bin";
std::string c105_bin  = bin_path + "/layers/c105.bin";
std::string g106_bin  = bin_path + "/layers/g106.bin";

tk::dnn::Conv2d     c0   (&net,  32, 3, 3, 1, 1, 1, 1,  c0_bin, true);
tk::dnn::Activation a0   (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c1   (&net,  64, 3, 3, 2, 2, 1, 1,  c1_bin, true);
tk::dnn::Activation a1   (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c2   (&net,  32, 1, 1, 1, 1, 0, 0,  c2_bin, true);
tk::dnn::Activation a2   (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c3   (&net,  64, 3, 3, 1, 1, 1, 1,  c3_bin, true);
tk::dnn::Activation a3   (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s4   (&net, &a1);
tk::dnn::Conv2d     c5   (&net, 128, 3, 3, 2, 2, 1, 1,  c5_bin, true);
tk::dnn::Activation a5   (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c6   (&net,  64, 1, 1, 1, 1, 0, 0,  c6_bin, true);
tk::dnn::Activation a6   (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c7   (&net, 128, 3, 3, 1, 1, 1, 1,  c7_bin, true);
tk::dnn::Activation a7   (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s8   (&net, &a5);
tk::dnn::Conv2d     c9   (&net,  64, 1, 1, 1, 1, 0, 0,  c9_bin, true);
tk::dnn::Activation a9   (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c10  (&net, 128, 3, 3, 1, 1, 1, 1, c10_bin, true);
tk::dnn::Activation a10  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s11  (&net, &s8);

tk::dnn::Conv2d     c12  (&net, 256, 3, 3, 2, 2, 1, 1, c12_bin, true);
tk::dnn::Activation a12  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c13  (&net, 128, 1, 1, 1, 1, 0, 0, c13_bin, true);
tk::dnn::Activation a13  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c14  (&net, 256, 3, 3, 1, 1, 1, 1, c14_bin, true);
tk::dnn::Activation a14  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s15  (&net, &a12);

tk::dnn::Conv2d     c16  (&net, 128, 1, 1, 1, 1, 0, 0, c16_bin, true);
tk::dnn::Activation a16  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c17  (&net, 256, 3, 3, 1, 1, 1, 1, c17_bin, true);
tk::dnn::Activation a17  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s18  (&net, &s15);
tk::dnn::Conv2d     c19  (&net, 128, 1, 1, 1, 1, 0, 0, c19_bin, true);
tk::dnn::Activation a19  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c20  (&net, 256, 3, 3, 1, 1, 1, 1, c20_bin, true);
tk::dnn::Activation a20  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s21  (&net, &s18);
tk::dnn::Conv2d     c22  (&net, 128, 1, 1, 1, 1, 0, 0, c22_bin, true);
tk::dnn::Activation a22  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c23  (&net, 256, 3, 3, 1, 1, 1, 1, c23_bin, true);
tk::dnn::Activation a23  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s24  (&net, &s21);
tk::dnn::Conv2d     c25  (&net, 128, 1, 1, 1, 1, 0, 0, c25_bin, true);
tk::dnn::Activation a25  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c26  (&net, 256, 3, 3, 1, 1, 1, 1, c26_bin, true);
tk::dnn::Activation a26  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s27  (&net, &s24);
tk::dnn::Conv2d     c28  (&net, 128, 1, 1, 1, 1, 0, 0, c28_bin, true);
tk::dnn::Activation a28  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c29  (&net, 256, 3, 3, 1, 1, 1, 1, c29_bin, true);
tk::dnn::Activation a29  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s30  (&net, &s27);
tk::dnn::Conv2d     c31  (&net, 128, 1, 1, 1, 1, 0, 0, c31_bin, true);
tk::dnn::Activation a31  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c32  (&net, 256, 3, 3, 1, 1, 1, 1, c32_bin, true);
tk::dnn::Activation a32  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s33  (&net, &s30);
tk::dnn::Conv2d     c34  (&net, 128, 1, 1, 1, 1, 0, 0, c34_bin, true);
tk::dnn::Activation a34  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c35  (&net, 256, 3, 3, 1, 1, 1, 1, c35_bin, true);
tk::dnn::Activation a35  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s36  (&net, &s33);

tk::dnn::Conv2d     c37  (&net, 512, 3, 3, 2, 2, 1, 1, c37_bin, true);
tk::dnn::Activation a37  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c38  (&net, 256, 1, 1, 1, 1, 0, 0, c38_bin, true);
tk::dnn::Activation a38  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c39  (&net, 512, 3, 3, 1, 1, 1, 1, c39_bin, true);
tk::dnn::Activation a39  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s40  (&net, &a37);

tk::dnn::Conv2d     c41  (&net, 256, 1, 1, 1, 1, 0, 0, c41_bin, true);
tk::dnn::Activation a41  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c42  (&net, 512, 3, 3, 1, 1, 1, 1, c42_bin, true);
tk::dnn::Activation a42  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s43  (&net, &s40);
tk::dnn::Conv2d     c44  (&net, 256, 1, 1, 1, 1, 0, 0, c44_bin, true);
tk::dnn::Activation a44  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c45  (&net, 512, 3, 3, 1, 1, 1, 1, c45_bin, true);
tk::dnn::Activation a45  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s46  (&net, &s43);
tk::dnn::Conv2d     c47  (&net, 256, 1, 1, 1, 1, 0, 0, c47_bin, true);
tk::dnn::Activation a47  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c48  (&net, 512, 3, 3, 1, 1, 1, 1, c48_bin, true);
tk::dnn::Activation a48  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s49  (&net, &s46);
tk::dnn::Conv2d     c50  (&net, 256, 1, 1, 1, 1, 0, 0, c50_bin, true);
tk::dnn::Activation a50  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c51  (&net, 512, 3, 3, 1, 1, 1, 1, c51_bin, true);
tk::dnn::Activation a51  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s52  (&net, &s49);
tk::dnn::Conv2d     c53  (&net, 256, 1, 1, 1, 1, 0, 0, c53_bin, true);
tk::dnn::Activation a53  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c54  (&net, 512, 3, 3, 1, 1, 1, 1, c54_bin, true);
tk::dnn::Activation a54  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s55  (&net, &s52);
tk::dnn::Conv2d     c56  (&net, 256, 1, 1, 1, 1, 0, 0, c56_bin, true);
tk::dnn::Activation a56  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c57  (&net, 512, 3, 3, 1, 1, 1, 1, c57_bin, true);
tk::dnn::Activation a57  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s58  (&net, &s55);
tk::dnn::Conv2d     c59  (&net, 256, 1, 1, 1, 1, 0, 0, c59_bin, true);
tk::dnn::Activation a59  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c60  (&net, 512, 3, 3, 1, 1, 1, 1, c60_bin, true);
tk::dnn::Activation a60  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s61  (&net, &s58);

tk::dnn::Conv2d     c62  (&net,1024, 3, 3, 2, 2, 1, 1, c62_bin, true);
tk::dnn::Activation a62  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c63  (&net, 512, 1, 1, 1, 1, 0, 0, c63_bin, true);
tk::dnn::Activation a63  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c64  (&net,1024, 3, 3, 1, 1, 1, 1, c64_bin, true);
tk::dnn::Activation a64  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s65  (&net, &a62);

tk::dnn::Conv2d     c66  (&net, 512, 1, 1, 1, 1, 0, 0, c66_bin, true);
tk::dnn::Activation a66  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c67  (&net,1024, 3, 3, 1, 1, 1, 1, c67_bin, true);
tk::dnn::Activation a67  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s68  (&net, &s65);

tk::dnn::Conv2d     c69  (&net, 512, 1, 1, 1, 1, 0, 0, c69_bin, true);
tk::dnn::Activation a69  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c70  (&net,1024, 3, 3, 1, 1, 1, 1, c70_bin, true);
tk::dnn::Activation a70  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s71  (&net, &s68);

tk::dnn::Conv2d     c72  (&net, 512, 1, 1, 1, 1, 0, 0, c72_bin, true);
tk::dnn::Activation a72  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c73  (&net,1024, 3, 3, 1, 1, 1, 1, c73_bin, true);
tk::dnn::Activation a73  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Shortcut   s74  (&net, &s71);

tk::dnn::Conv2d     c75  (&net, 512, 1, 1, 1, 1, 0, 0, c75_bin, true);
tk::dnn::Activation a75  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c76  (&net,1024, 3, 3, 1, 1, 1, 1, c76_bin, true);
tk::dnn::Activation a76  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c77  (&net, 512, 1, 1, 1, 1, 0, 0, c77_bin, true);
tk::dnn::Activation a77  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c78  (&net,1024, 3, 3, 1, 1, 1, 1, c78_bin, true);
tk::dnn::Activation a78  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c79  (&net, 512, 1, 1, 1, 1, 0, 0, c79_bin, true);
tk::dnn::Activation a79  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c80  (&net,1024, 3, 3, 1, 1, 1, 1, c80_bin, true);
tk::dnn::Activation a80  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c81  (&net, preYoloFilters, 1, 1, 1, 1, 0, 0, c81_bin, false);
tk::dnn::Yolo     yolo0  (&net, classes, 3, g82_bin);

tk::dnn::Layer *m83_layers[1] = { &a79 };
tk::dnn::Route      m83  (&net, m83_layers, 1);
tk::dnn::Conv2d     c84  (&net, 256, 1, 1, 1, 1, 0, 0, c84_bin, true);
tk::dnn::Activation a84  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Upsample   u85  (&net, 2);

tk::dnn::Layer *m86_layers[2] = { &u85, &s61 };
tk::dnn::Route      m86  (&net, m86_layers, 2);
tk::dnn::Conv2d     c87  (&net, 256, 1, 1, 1, 1, 0, 0, c87_bin, true);
tk::dnn::Activation a87  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c88  (&net, 512, 3, 3, 1, 1, 1, 1, c88_bin, true);
tk::dnn::Activation a88  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c89  (&net, 256, 1, 1, 1, 1, 0, 0, c89_bin, true);
tk::dnn::Activation a89  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c90  (&net, 512, 3, 3, 1, 1, 1, 1, c90_bin, true);
tk::dnn::Activation a90  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c91  (&net, 256, 1, 1, 1, 1, 0, 0, c91_bin, true);
tk::dnn::Activation a91  (&net, tk::dnn::ACTIVATION_LEAKY);

tk::dnn::Conv2d     c92  (&net, 512, 3, 3, 1, 1, 1, 1, c92_bin, true);
tk::dnn::Activation a92  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c93  (&net, preYoloFilters, 1, 1, 1, 1, 0, 0, c93_bin, false);
tk::dnn::Yolo     yolo1  (&net, classes, 3, g94_bin);

tk::dnn::Layer *m95_layers[1] = { &a91 };
tk::dnn::Route      m95  (&net, m95_layers, 1);
tk::dnn::Conv2d     c96  (&net, 128, 1, 1, 1, 1, 0, 0, c96_bin, true);
tk::dnn::Activation a96  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Upsample   u97  (&net, 2);

tk::dnn::Layer *m98_layers[2] = { &u97, &s36 };
tk::dnn::Route      m98  (&net, m98_layers, 2);
tk::dnn::Conv2d     c99  (&net, 128, 1, 1, 1, 1, 0, 0, c99_bin, true);
tk::dnn::Activation a99  (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c100 (&net, 256, 3, 3, 1, 1, 1, 1, c100_bin, true);
tk::dnn::Activation a100 (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c101 (&net, 128, 1, 1, 1, 1, 0, 0, c101_bin, true);
tk::dnn::Activation a101 (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c102 (&net, 256, 3, 3, 1, 1, 1, 1, c102_bin, true);
tk::dnn::Activation a102 (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c103 (&net, 128, 1, 1, 1, 1, 0, 0, c103_bin, true);
tk::dnn::Activation a103 (&net, tk::dnn::ACTIVATION_LEAKY);

tk::dnn::Conv2d     c104 (&net, 256, 3, 3, 1, 1, 1, 1, c104_bin, true);
tk::dnn::Activation a104 (&net, tk::dnn::ACTIVATION_LEAKY);
tk::dnn::Conv2d     c105 (&net, preYoloFilters, 1, 1, 1, 1, 0, 0, c105_bin, false);
tk::dnn::Yolo      yolo2 (&net, classes, 3, g106_bin);

yolo[0] = &yolo0;
yolo[1] = &yolo1;
yolo[2] = &yolo2;