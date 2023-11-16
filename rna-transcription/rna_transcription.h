#pragma once

#ifndef RNA_TRANSCRIPTION_H
#define RNA_TRANSCRIPTION_H

#include <string>
#include <string_view>
#include <stdexcept>

namespace rna_transcription {

    std::string to_rna(std::string_view dna);
    char to_rna(char dna);

}  // namespace rna_transcription

#endif // RNA_TRANSCRIPTION_H