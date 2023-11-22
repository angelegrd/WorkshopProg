// FRACTALE

// #include <sil/sil.hpp>
// #include <complex>


// int main()
// {
//     sil::Image image{500/*width*/, 500/*height*/};

//     for (int x{0}; x < (image.width()); x++)
//     {
//         for (int y{0}; y < image.height(); y++)
//         {
//             std::complex<float> z{0.f, 0.f}; // Définis le nombre z = 0 + 0*i
//             std::complex<float> c{static_cast<float>(x)/image.width()*4.f-2.f, static_cast<float>(y)/image.height()*4.f-2.f};     //définis la position du pixel (x,y)
          
//             int count{0};

//             for (int j{0}; j<50; j++)
//             {
//                 z = z * z + c;
//                 count+=1;

//                 if (std::abs(z) > 2){
//                     break;
//                 }
//             }

//             image.pixel(x,y)=glm::vec3{count/50.f};
//         }
//     }
//     image.save("output/pouet.png");
// }