#ifndef SWAGGER_TYPES_LcdsPlayer_HPP
#define SWAGGER_TYPES_LcdsPlayer_HPP
#include <json.hpp>
namespace test {
  // 
  struct LcdsPlayer {
'    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
  };

  void to_json(nlohmann::json& j, const LcdsPlayer& v) {
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  void from_json(const nlohmann::json& j, LcdsPlayer& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LcdsPlayer_HPP
