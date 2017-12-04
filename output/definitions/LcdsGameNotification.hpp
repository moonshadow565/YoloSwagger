#ifndef SWAGGER_TYPES_LcdsGameNotification_HPP
#define SWAGGER_TYPES_LcdsGameNotification_HPP
#include <json.hpp>
namespace test {
  // 
  struct LcdsGameNotification {
'    // 
    std::string messageArgument;
    // 
    std::string messageCode;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const LcdsGameNotification& v) {
    j["messageArgument"] = v.messageArgument;
    j["messageCode"] = v.messageCode;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LcdsGameNotification& v) {
    v.messageArgument = j.at("messageArgument").get<std::string>;
    v.messageCode = j.at("messageCode").get<std::string>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LcdsGameNotification_HPP
