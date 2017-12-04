#ifndef SWAGGER_TYPES_LolMissionsLoginSession_HPP
#define SWAGGER_TYPES_LolMissionsLoginSession_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMissionsLoginSession {
    // 
    uint64_t accountId;
    // 
    std::string platformId;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsLoginSession& v) {
    j["accountId"] = v.accountId;
    j["platformId"] = v.platformId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.platformId = j.at("platformId").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolMissionsLoginSession_HPP
