#ifndef SWAGGER_TYPES_LolEmailVerificationAccessToken_HPP
#define SWAGGER_TYPES_LolEmailVerificationAccessToken_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEmailVerificationAccessToken {
    // 
    uint64_t expiry;
    // 
    std::string token;
  };

  inline void to_json(nlohmann::json& j, const LolEmailVerificationAccessToken& v) {
    j["expiry"] = v.expiry;
    j["token"] = v.token;
  }

  inline void from_json(const nlohmann::json& j, LolEmailVerificationAccessToken& v) {
    v.expiry = j.at("expiry").get<uint64_t>;
    v.token = j.at("token").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEmailVerificationAccessToken_HPP
