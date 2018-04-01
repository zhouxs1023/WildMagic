#!/bin/tcsh
cd ${SRCROOT}
set HEADERS = `ls ../*.h ../*.inl`
foreach header (${HEADERS})
    cp -fp "${SRCROOT}"/$header ../../SDK/Include
end

cp -fp "${BUILT_PRODUCTS_DIR}"/libWm5AglApplicationd.a ../../SDK/Library/Debug/libWm5AglApplicationd.a
ranlib ../../SDK/Library/Debug/libWm5AglApplicationd.a

