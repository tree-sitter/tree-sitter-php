from typing import Final
from typing_extensions import CapsuleType


HIGHLIGHTS_QUERY: Final[str]
INJECTIONS_QUERY: Final[str]
TAGS_QUERY: Final[str]


def language_php() -> CapsuleType: ...
def language_php_only() -> CapsuleType: ...
