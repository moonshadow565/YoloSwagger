using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPreEndOfGameSequenceEvent
    {
        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "priority")]
        int Priority { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPreEndOfGameSequenceEvent {\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Priority: ").Append(Priority).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}