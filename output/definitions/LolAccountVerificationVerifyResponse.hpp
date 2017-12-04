#ifndef SWAGGER_TYPES_LolAccountVerificationVerifyResponse_HPP
#define SWAGGER_TYPES_LolAccountVerificationVerifyResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolAccountVerificationVerifyResponse {
    // 
    std::string message;
    // 
    int32_t status;
    // 
    bool success;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationVerifyResponse& v) {
    j["message"] = v.message;
    j["status"] = v.status;
    j["success"] = v.success;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationVerifyResponse& v) {
    v.message = j.at("message").get<std::string>;
    v.status = j.at("status").get<int32_t>;
    v.success = j.at("success").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolAccountVerificationVerifyResponse_HPP
