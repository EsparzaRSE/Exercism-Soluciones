#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> rounded{};
    
    for(int i{0}; i < student_scores.size(); ++i){
        rounded.emplace_back(static_cast<int>(student_scores.at(i)));
    }
    return rounded;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int counter{0};

    for(int i{0}; i < student_scores.size(); ++i){
        if(student_scores.at(i) <= 40) ++counter;
    }
    return counter;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    // TODO: Implement above_threshold
    std::vector<int> above{};

    for(int i{0}; i < student_scores.size(); ++i){
        if(student_scores.at(i) >= threshold) above.emplace_back(student_scores.at(i));
    }
    return above;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int,4> grades{};

    for(int i{0}; i < grades.size(); ++i){
        if(i == 0) grades.at(i) = 41;
        else grades.at(i) = grades.at(i-1) + ((highest_score - 40) / 4);
    }
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> matched{};
    for(int i{0}; i < student_scores.size(); ++i){
        matched.emplace_back(std::to_string(i+1) + ". " + student_names.at(i) + ": " + std::to_string(student_scores.at(i)));
    }
    return matched;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for(int i{0}; i < student_scores.size(); ++i){
        if(student_scores.at(i) == 100) return student_names.at(i);
    }
    return "";
}