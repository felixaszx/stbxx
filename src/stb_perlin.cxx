#include "stb_perlin.hxx"
#define STB_PERLIN_IMPLEMENTATION
#include <stb/stb_perlin.h>

float //
stb::perlin_noise_generator::noise(std::array<int, 3> wrap) noexcept
{
    return stb_perlin_noise3(coord_[0], coord_[1], coord_[2], //
                             wrap[0], wrap[1], wrap[2]);
}

float                                        //
stb::perlin_noise_generator::noise(int seed, //
                                   std::array<float, 3> wrap) noexcept
{
    return stb_perlin_noise3_seed(coord_[0], coord_[1], coord_[2], //
                                  wrap[0], wrap[1], wrap[2],       //
                                  seed);
}

float                                                      //
stb::perlin_noise_generator::ridge_noise(float lacunarity, //
                                         float gain,
                                         float offset,
                                         int octaves) noexcept
{
    return stb_perlin_ridge_noise3(coord_[0], coord_[1], coord_[2], //
                                   lacunarity, gain, offset, octaves);
}

float                                                    //
stb::perlin_noise_generator::fbm_noise(float lacunarity, //
                                       float gain,
                                       int octaves) noexcept
{
    return stb_perlin_fbm_noise3(coord_[0], coord_[1], coord_[2], //
                                 lacunarity, gain, octaves);
}

float                                                           //
stb::perlin_noise_generator::turbulence_noise(float lacunarity, //
                                              float gain,
                                              int octaves) noexcept
{
    return stb_perlin_turbulence_noise3(coord_[0], coord_[1], coord_[2], //
                                        lacunarity, gain, octaves);
}
