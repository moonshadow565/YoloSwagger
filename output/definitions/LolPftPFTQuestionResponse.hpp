#ifndef SWAGGER_TYPES_LolPftPFTQuestionResponse_HPP
#define SWAGGER_TYPES_LolPftPFTQuestionResponse_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolPftPFTQuestionResponse {
'    // 
    uint64_t questionId;
    // 
    nlohmann::json responseData;
  };

  void to_json(nlohmann::json& j, const LolPftPFTQuestionResponse& v) {
    j["questionId"] = v.questionId;
    j["responseData"] = v.responseData;
  }

  void from_json(const nlohmann::json& j, LolPftPFTQuestionResponse& v) {
    v.questionId = j.at("questionId").get<uint64_t>;
    v.responseData = j.at("responseData").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_LolPftPFTQuestionResponse_HPP
