// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <stdint.h>

//WAV HEADER
#pragma pack(push, 1) // prevent padding
struct wav_header {
    char     riff[4];          
    uint32_t chunk_size;       
    char     wave[4];          
    char     fmt[4];          
    uint32_t subchunk1_size;   
    uint16_t audio_format;    
    uint16_t num_channels;    
    uint32_t sample_rate;    
    uint32_t byte_rate;       
    uint16_t block_align;  
    uint16_t bits_per_sample;   
    char     data[4];           
    uint32_t subchunk2_size;   
};
#pragma pack(pop)


// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    //Read Header: created a struct to store all the information
    struct wav_header input_wav_header = {
        .riff = {'R', 'I', 'F', 'F'},
        .chunk_size = 36,
        .wave = {'W', 'A', 'V', 'E'},
        .fmt = {'f', 'm', 't', ' '},
        .subchunk1_size = 16,
        .audio_format = 1,
        .num_channels = 2,
        .sample_rate = 44100,
        .byte_rate = 176400,
        .block_align = 4,
        .bits_per_sample = 16,
        .data = {'d', 'a', 't', 'a'},
        .subchunk2_size = 100000
    };

    // Header Buffer: contains all the bytes
    uint8_t header_buffer[HEADER_SIZE];

    // Read HEADER_SIZE bytes from input file into header_buffer
    if (fread(header_buffer, sizeof(uint8_t), HEADER_SIZE, input) != HEADER_SIZE)
    {
        printf("Error reading WAV header.\n");
        fclose(input);
        fclose(output);
        return 1;
    }
    //stores the data into the buffer, treats each section as 8 bites (1 byte), reads the header of the input file
    fread(header_buffer, sizeof(uint8_t), HEADER_SIZE, input); 

    // Print each byte in the header_buffer to the terminal
    printf("WAV Header Bytes:\n");
    for (int i = 0; i < HEADER_SIZE; i++)
    {
        printf("%02X ", header_buffer[i]);
    }
    printf("\n");


    for(int i = 0; i < HEADER_SIZE; i++)
    {
        
    }



    fclose(input);
    fclose(output);
}
