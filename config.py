def can_build(env, platform):
    return True #(platform == "windows" and env["use_mingw"]) or platform == "linux" or platform == "macos"


def configure(env):
    pass


def get_doc_classes():
    return [
        "JavaScript",
        "JavaScriptModule",
    ]


def get_doc_path():
    return "doc_classes"
